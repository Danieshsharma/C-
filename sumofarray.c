#include<stdio.h>
int main(){
    int array[4]={2,3,4,3};
    int sum =0;
   
     for(int i=0;i<=3;i++){
        sum = sum + array[i];
     }
     printf("%d",sum);
     return 0;
}