#include<stdio.h>
int main(){
    int num1=0;
    int fact1=1;
    printf("Enter a number : ");
    scanf("%d",&num1);
    for(int i=1;i<num1+1;i++){
        fact1=fact1*i; 
    }
    printf("%d",fact1);

    return 0;
}