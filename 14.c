#include<stdio.h>
int main(){
    int num1=0;
    int sum1=0;
    printf("Enter a number : ");
    scanf("%d",&num1);
    for(int i=1;i<num1+1;i++){
         sum1+=i;
    }
    printf("%d",sum1);
    return 0;
}