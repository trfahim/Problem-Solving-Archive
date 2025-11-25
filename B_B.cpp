#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int row=n,col=n;
    int mat[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> mat[i][j];
        }
    }
    int count=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int sum_r=0, sum_c=0;
            for(int k=0; k<col; k++){
                sum_r += mat[i][k];
                sum_c += mat[k][j];
            }
            if(sum_c>sum_r) count++;
        }   
    }
    cout << count << endl;
}