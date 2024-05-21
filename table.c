#include<stdio.h>
int main(){
    int n;
    printf("enter the number for which you need table");
    scanf("%d",&n);
    int i=1;
    while(i<11)
    {
        int  table =n*i;
        printf("%d\n",table);
        i++;
    }
   
    return 0;
}