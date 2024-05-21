#include<stdio.h>
int main(){
   int n;
   int count =0;
   printf("enter the value of the n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         if(i%j==0){
            count++;
         }
      }
      if(count==2){
         printf("%d\n",i);
      }
      count=0;
   }
   return 0;
}