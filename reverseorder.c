#include<stdio.h>
int main(){
    int n;
    printf("enter the numebr ");
    scanf("%d",&n);
    int reverse;
    int rem=0;
    while(n!=0){
        reverse=n%10;
       printf("%d",reverse);
       n=n/10;
    }
 
    return 0;
} 