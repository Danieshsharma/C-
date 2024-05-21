#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp =*x;
    *x =*y;
    *y=temp;
    return; 

}
int main(){
    int a=7;
    int b=8;
     swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}