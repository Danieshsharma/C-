#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int swap[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&swap[i]);
        if(i%2!=0){
            swap[i]=swap[i]*2;
        }
    else{
        swap[i]=swap[i]+10;
    }
    }
    for(int i=0;i<=size-1;i++){
        printf("\n%d",swap[i]);
    }
    return 0;
}