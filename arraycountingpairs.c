#include<stdio.h>
int main(){
    int size;
    int doublets=0;
    int sum;
    printf("enter the number");
    scanf("%d",&sum);
    printf("enter the size of the arrray \b");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<=size-1;i++){
        for(int j=i+1;j<=size-1;j++){
            if(array[i]+array[j]==sum){
                doublets++;
            
            }
        }
    }
    printf("%d",doublets);
}