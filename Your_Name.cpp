#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(; t>0; t--){
        int n;
        cin >> n;
        char s[21],p[21];
        cin >> s >> p;
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i]>s[j])
                swap(s[i],s[j]);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(p[i]>p[j])
                swap(p[i],p[j]);
            }
        }

        if(strcmp(s,p)==0) cout << "YES\n";
        else cout << "NO\n";
    }

}