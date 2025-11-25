#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        char s[11];
        cin >> s;
        int len = strlen(s);
        int c=0,o=0,d=0,e=0,f=0,r=0,s1=0;
        int count=0;
        for(int i=0; s[i]!='\0' && i<len; i++){
            if(s[i]=='c') c++;
            else if(s[i]=='o') o++;
            else if(s[i]=='d') d++;
            else if(s[i]=='e') e++;
            else if(s[i]=='f') f++;
            else if(s[i]=='r') r++;
            else if(s[i]=='e') e++;
            else if(s[i]=='s') s1++;
            else count++;

            if((s[i]=='c'&&c>2)||(s[i]=='o'&&o>2)||(s[i]=='d'&&d>1)||(s[i]=='e'&&e>2)){
                count++;
            }
            else if((s[i]=='f'&&f>1)||(s[i]=='r'&&r>1)||(s[i]=='s'&&s1>1)){
                count++;
            }
        }
        cout << count << endl;
    }
}