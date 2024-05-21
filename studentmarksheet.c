#include<stdio.h>
int main(){
    int n;
    float sum=0;
    float average ;
    float percentage;
    printf("enter the number of the subject\n");
    scanf("%d",&n);
    int sub[n];
    for(int i=1;i<=n;i++){
        printf("enter the marks of the student %d\n",i);
        scanf("%d",&sub[i]);
    }
    for(int i=1;i<=n;i++){
        sum=sum+sub[i];
    }
    average=sum/n;
    percentage =(sum/500)*100;
    printf("the average marks of the student \n");
    printf("%f\n",average);  
    printf("the percentage of the student\n");
    printf("%f\n ",percentage );
    return 0;
}