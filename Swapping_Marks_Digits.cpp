#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    for(; t>0; t--){
        int a,b;
        cin >> a >> b;
        int temp1 = a, temp2 = b;
        if(a>b) cout << "Yes\n";
        else{
            int alice=0,bob=0;
            while(a>0){
                alice = (alice*10)+(a%10);
                a /= 10;
            }
            while(b>0){
                bob = (bob*10)+(b%10);
                b /= 10;
            }
            if(alice > temp2) cout << "Yes\n";
            else if(temp1 > bob) cout << "Yes\n";
            else if(alice > bob) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}