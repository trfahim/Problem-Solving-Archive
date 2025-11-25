#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,count=0;
    cin >> n;
 
    while(n>0){
        if(n%2!=0){
            count++;
        }
        n/=2;
    }
    cout << count << endl; 
}