#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int matrix[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int p_count = 0, s_count = 0;
    int check = 0;
    if(r!=c){
        printf("NO");
    }
    else{
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==j || (i+j)==r-1){
                    if(matrix[i][j] != 1){
                        check++;
                        break;
                    }
                }
                else{
                    if(matrix[i][j] != 0){
                        check++;
                        break;
                    }
                }
            }
        }
        if(check == 0) printf("YES");
        else printf("NO");
    }
    return 0;
}