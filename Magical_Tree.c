#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    int star_line = 6;
    for(int i=1; i<=21; i++){
        if(i==n){
            break;
        }
        else if(i%2==0) continue;
        else star_line++;
    }
    int space = star_line-1;
    int star = 1;
    for(int i=1; i<=star_line; i++){
        for(int s=1; s<=space; s++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    for(int i=1; i<=5; i++){
        for(int s=1; s<=5; s++){
            printf(" ");
        }
        for(int j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}