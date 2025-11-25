#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m,cal=0,j=1,count=0;
    cin >> n >> m;
    if(n==m) cout << 0 << endl;
    else if((n%m==0)||(m%n==0) && (m%2==0)){
        for(long long i=0; n<=m ; i++){

            if(i%2==0){
                j *= 2;
                cal = (n*j);
            }
            else {
                j *= 3;
                cal = (n*j);
            }
            if(cal==m){
            count++;
            break;
            }
            else count++;
        }
        cout << count << endl;
    }
    else cout << -1 << endl;

}