#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&array[i]);
    }
    int i = 0;
    int j= n-1;
    int temp;
    while(i<=j){
    temp=array[i];
    array [i]=array[j];
    array[j]=temp;
    i++;
    j--;
    }
    for(int i=0;i<n-1;i++){
        printf("%d",array[i]);
    }
return 0;

}