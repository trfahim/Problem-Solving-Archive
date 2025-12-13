#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int check = 1;
        for(int i = 0, j = n - 1; i < j; i++, j--) {
            if(s[i] != s[j]) {
                check = 0;
                break;
            }
        }
        int odd = 0;
        if(check) {
            cout << 0 << "\n";
            continue;
        }
        for(int i=0; i<n; i++){
            int check = 1;
            for(int j=0; j<i; j++){
                if(s[i] == s[j]){
                    check = 0;
                    break;
                }
            }
            int count = 0;
            if(check){
                for(int k=0; k<n; k++){
                    if(s[i] == s[k]) count++;
                }
                if(count%2 != 0) odd++;
                
            }
        }
        if(odd <= 1) cout << 0 << endl;
        else cout << odd-1 << endl;
    }

    return 0;
}
