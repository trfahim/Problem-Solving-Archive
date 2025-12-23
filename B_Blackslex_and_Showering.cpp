#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> num(n);
        for (int i=0; i<n; i++) cin >> num[i];

        long long sum = 0;
        for (int i = 0; i< n - 1; i++) {
            sum += abs(num[i]-num[i+1]);
        }

        long long max_val = 0;
        max_val = max(max_val, abs(num[0]- num[1]));
        max_val = max(max_val, abs(num[n-2]-num[n-1]));

        for (int i=1; i<n-1; i++) {
            long long sum1 = abs(num[i-1]-num[i]) + abs(num[i]-num[i+1]);
            long long sum2 = abs(num[i-1]-num[i+1]);
            max_val = max(max_val, sum1-sum2);
        }

        cout << sum - max_val << endl;
    }
    return 0;
}