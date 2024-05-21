#include<stdio.h>
int main(){
    int n;
    printf("enter the number upto where you need odd numbers");
    scanf("%d",&n);
    int i=1;
    while ( i<n)
    {
        printf("%d\n",i);
        i=i+2;

    }
   
    return 0;
    
}