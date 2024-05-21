#include<stdio.h>
int main(){
    int c[3][3],i,j;
    int a[3][3];
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the elements a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the elements a[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++){    
        for (j=0;j<3;j++){ 
            c[i][j]=a[i][j]+b[i][j];
        }
    } 
     for(i=0;i<3;i++){    
        printf("\n"); 
        for (j=0;j<3;j++){ 
            printf("%d\t",c[i][j]);    
        }
    }        
  
  return 0 ;

}