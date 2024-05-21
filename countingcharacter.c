#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    puts("enter the string  :");
    gets(str);
    int size =0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);

}