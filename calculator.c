#include<stdio.h>
int main(){
    int a,b,result;
    int ch;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of the b\n");
    scanf("%d",&b);
    printf("Choose operation to perform 1 or 2or 3 or 4=\n");
    scanf(" %d",&ch);
    switch(ch){
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
    
    }
    printf("%d",result);
    return 0;
}