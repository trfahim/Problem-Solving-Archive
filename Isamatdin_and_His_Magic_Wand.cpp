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
        int num [n],check=1;
        for(int i=0; i<n; i++){
            cin >> num[i];
        }
        int val = (num[0]%2);
        for(int i=0; i<n; i++){
            if(val != (num[i]%2)){
                check = 0;
                break;
            }
        }
        if(check){
            for(int i=0; i<n; i++){
                cout << num[i] << " ";
            }
        }
        else{
            sort(num, num+n);
            for(int i=0; i<n; i++){
                cout << num[i] << " ";
            }
        }
        cout << "\n";
        
    }
}