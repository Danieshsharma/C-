#include<stdio.h>
//#include<math.h>
int main(){
 int a[3][3],i,j;
// int b[3][3],k,l;
 printf("enter the elments\n:");
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    

        scanf("%d",&a[i][j]);
    }
    
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)1
    

        printf("%d",a[i][j]);
    }

      printf("\n printing the elements ....\n");     
    for(int i=0;i<3;i++){
    for(int j=0;j<i;j++){
        printf("%d",a[i][j]);
    }
 }   
           printf("\n"); 
    }   
    