#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int num2[n], n2=0;
    for(int i=0; i<n; i++){
        int check = 1;
        for(int j=0; j<i; j++){
            if(num[i]==num[j]){
                check = 0;
                break;
            }
        }
        if(check){
            num2[n2] = num[i];
            n2++;
        }
    }
    sort(num2, num2+n2);
    int count=0;
    for(int i=0; i<n2; i++){
        if(num2[i] < num2[i+1]){
            count++;
        }
    }
    cout << count << endl;
    
    
}