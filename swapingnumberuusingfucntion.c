#include<stdio.h>
void swap(int* x,int* y ){
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
return ;
}

int main(){
    int a,b;
    printf("enter the value of the a");
    scanf("%d",&a);
    printf("enter the value of the b");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;

}
///// it can't be done pointers pass bu refernce use krna pdega 



