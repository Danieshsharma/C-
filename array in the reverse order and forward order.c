#include <stdio.h>

int main() {
   int marks [10];
   for(int i=0;i<=9;i++){
      
       printf("enter marks of the each student  %d\n ",i);
       
       scanf("%d",&marks[i]);
       
   }
 for(int i=9;i>=0;i--){
     printf("%d",marks[i]);
 }

    return 0;
}