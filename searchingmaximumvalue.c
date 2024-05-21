#include<stdio.h>
int main(){
    int n;
    int max=-1;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    printf("%d",max);

}