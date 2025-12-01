#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s,x;
        cin >> s;
        cin >> x;
        string s2="";
        for(int i=0; i<s.size() && s[i]!='\0'; i++){
            if(s.substr(i, x.size()) == x){
                s2 += '#';
                i += (x.size()-1);
            }
            else{
                s2 += s[i];
            }
        }
        cout << s2 << endl;
    }

}