#include<stdio.h>
int add(int x,int y){      //here the intadd is function and the variabale inside are called argumnets;// // here int is return type ;
    return x+y;
}
int main(){
    int a,b;
    printf("enter the number a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    int sum= add(a,b);  // here function is called by using add(a,b);
    printf("%d",sum);
    return 0;
}