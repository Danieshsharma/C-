#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&array[i]);
    }
     for(int i=0;i<=n-1;i++){
        printf("%d\n",array[i]);
    }
}