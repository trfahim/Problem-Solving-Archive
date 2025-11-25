#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int num;
    scanf("%d", &num);
    int array[1000],c=0;
    for(int i=1; i<=1000; i++){
        if(i<=10){
            if(i==4 || i==7){
                array[c] = i;
                c++;
            }
        }
        else{
            int digit=0;
            int check=0;
            int temp=i;
            while(temp>0){
                int l_digit = (temp%10);
                digit++;
                if(l_digit==4 || l_digit==7) check++;
                temp /= 10;
            }
            if(check==digit){
                array[c]=i;
                c++;
            }
        }
        
    }
    int check_ans=0;
    for(int i=0; i<c; i++){
        if(num%array[i]==0){
            check_ans++;
            break;
        }
    }
    if(check_ans==1) printf("YES");
    else printf("NO");
        

}