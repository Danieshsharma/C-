#include<stdio.h>
int add(int x,int y){
   int c=x+y;
   return c;
}
int main(){
    int a,b;
    printf("enter the number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    int c=add(a,b);
    printf("%d",c);
}