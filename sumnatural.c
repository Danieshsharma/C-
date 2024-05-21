#include<stdio.h>
int main(){
 int n;
 int sum;
 printf("enter the value of the n");
 scanf("%d",&n);
 int i=1;
 while(i<=n){
    sum=n*(n+1)/2;
    printf("%d\n",i);
     i++;
     sum=0;
 }
}