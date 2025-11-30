#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[n];
        int even=0,odd=0;
        int odd_array[n],o=0;
        int even_array[n],e=0;
        for(int i=0; i<n; i++){
            cin >> num[i];
            if(num[i]%2==0) {
                even++;
                even_array[e] = num[i];
                e++;
            }
            else{
                odd_array[o] = num[i];
                odd++;
                o++;
            }
        }

        if(even==odd) cout << 0 << endl;
        else if(n%2 != 0) cout << -1 << endl;
        else{
            int count = 0;
            if(even > odd){
                for(int i=0; i<e; i++){
                    if((even_array[i]+1)%2 != 0) {
                        odd++;
                        count++;
                        even--;
                    }
                    if(even==odd) break;
                }
            }
            else{
                for(int i=0; i<o; i++){
                    if((odd_array[i]+1)%2 == 0) {
                        even++;
                        count++;
                        odd--;
                    }
                    if(even==odd) break;
                }
            }
            cout << count << endl;
        }
    }
}