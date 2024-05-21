#include<stdio.h>
#include<string.h>
int main(){
    char str[7];
    puts("enter the string");
    gets(str);
    int i=0;
    int j=6;
    char  temp;
    while(0<=6){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;

    }
    puts("the reverse of the string");
    puts(str);
    return 0;
}