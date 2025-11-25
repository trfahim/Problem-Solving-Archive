#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[1000000];
    while(cin.getline(s, 1000000)){
        int len = strlen(s);
        char s2[1000000];
        int c = 0;
        for(int i=0; i<len && s[i]!='\0'; i++){
            if(s[i]==' ') continue;
            else{
                s2[c] = s[i];
                c++;
            }
        }
        sort(s2, s2+c);
        for(int i=0; i<c && s2[i]!='\0'; i++){
            cout << s2[i];
        }
        cout << '\n';
    }
}