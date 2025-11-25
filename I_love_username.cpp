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
    int count=0;
    int max=num[0],min=num[0];
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(num[j]>max){
                count++;
                max = num[j];
            }
            if(num[j]<min){
                count++;
                min = num[j];
            }
        }
    }
    cout << count << endl;
}