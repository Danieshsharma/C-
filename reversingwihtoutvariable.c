#include<stdio.h>
void reverse(int array[]){
    int i =0;
    int j=6;
    while(i<=j){
       int temp =array[i];
       array[i]=array[j];
       array[j]=temp;
       i++;
    j--;
    }
return ;
}
int main(){
    int array[7]={1,3,2,4,5,6,9};
    reverse(array);
    for(int i=0;i<=6;i++){
        printf("%d ",array[i]);
    }
}