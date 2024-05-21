#include<stdio.h>
void add(int x,int y){
    printf("%d",x);
    printf("%d",y);
}
int main(){
    int a,b;
    printf("enter the number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    add(a,b);

}