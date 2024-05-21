#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%c",&arr[i]);
    }
     for(int i=0;i<=n-1;i++){
        printf("%c",&arr[i]);
     }
     return 0;
}