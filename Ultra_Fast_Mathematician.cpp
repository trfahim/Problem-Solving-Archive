#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char s1[101],s2[101];
    cin >> s1;
    cin >> s2;
    int len = strlen(s1);
    for(int i=0; i<len && s1[i]!='\0'; i++){
        if(s1[i]=='1' && s2[i]=='1') cout << 0;
        else if((s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0')) cout << 1;
        else cout << 0;
    }
}