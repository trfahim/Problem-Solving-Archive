#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    set<long long> s;

    for(long long i=0; i<n; i++){
        long long val;
        cin >> val;
        s.insert(val);
    }

    long long val = 0, idx = INT_MAX, check = 0;
    for(auto i=s.begin(); i!=s.end(); i++){
        for(long long j=2; j<=100; j++){
            long long g = __gcd(*i,j);
            if(g == 1 && idx > j){
                val = j;
                idx = j;
                check++;
            }
        }
        
    }

    if(check) cout << val << endl;
    else cout << -1 << endl;
    
}
int main() {
    long long t;
    cin >> t;

    while(t--)
       solve();
}