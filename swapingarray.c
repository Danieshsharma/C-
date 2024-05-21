#include<stdio.h>
void fun( int x[]){
    int temp =x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int swap[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&swap[i]);
    }
    fun(swap);
    for(int i=0;i<=size-1;i++){
        printf("%d",swap[i]);
    }
    return 0;
}