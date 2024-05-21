#include<stdio.h>
int main(){
    int array[5];
    int sum;
    for(int i=0;i<=4;i++){
        scanf("%d",&array[i]);
    }
    for(int i=4;i<=0;i--){
        printf("%d",array[i]);
    
    }
   
    return 0;
}