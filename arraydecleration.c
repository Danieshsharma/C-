#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&array[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",array[i]);
    }
    return 0;
}