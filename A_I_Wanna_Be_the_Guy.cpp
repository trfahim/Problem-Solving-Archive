#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, p, q;
    cin >> n;
    int k = 0, num[105];
    cin >> p;
    int num1[105];
    for (int i = 0; i < p; i++)
    {
        cin >> num1[i];
        num[k] = num1[i];
        k++;
    }
    cin >> q;
    int num2[105];
    for (int i = 0; i < q; i++)
    {
        cin >> num2[i];
        num[k] = num2[i];
        k++;
    }
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == num[j])
            {
                check++;
                break;
            }
        } 
    }
    if (check == n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}
