#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char st[101];
    cin >> st;
    int len = strlen(st);
    char cp[101],c=0,l_count=0;
    for(int i=0; i<len && st[i]!='\0'; i++){
        int check = 1;
        if(st[i]=='l') l_count++;
        for(int j=0; j<i; j++){
            if(st[i]==st[j]){
                check = 0;
                break;
            }
        }
        if(check==1 || (st[i]=='l' && l_count<=2)){
            cp[c] = st[i];
            c++;
        }
    }
    char ans[101],an=0;
    for(int i=0; i<c; i++){
        if((cp[i]=='h'||cp[i]=='e'||cp[i]=='l'||cp[i]=='o')&&cp[i]!='\0'){
            ans[an] = cp[i];
            an++;
        }
    }
    
    if(ans[0]=='h'&&ans[1]=='e'&&ans[2]=='l'&&ans[3]=='l'&&ans[4]=='o'){
        cout << "YES";
    }
    else cout << "NO";

}