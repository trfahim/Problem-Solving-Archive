#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    vector<long long> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    
    long long max_sum = 0;
    long long current_sum = 0;

    for(int i=0; i<n; i++){
        if(current_sum+v[i] > v[i]) current_sum = current_sum+v[i];
        else current_sum = v[i];

        max_sum = max(current_sum, max_sum);
    }

    long long alice = max_sum * 40;
    long long bob = max_sum * 60;

    cout << max_sum << " ";
    if(alice > bob) cout << "Alice\n";
    else if(bob > alice) cout << "Bob\n";
    else cout << "Tie\n";

    return 0;
}
