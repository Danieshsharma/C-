#include<stdio.h>
int main(){
    int n;
    printf("enter the number n\n");
    scanf("%d",&n);
    int count =0;
    while(n!=0){
        n=n/10;
        count ++;
    }
    printf("the total number are following as %d\n",count);
}