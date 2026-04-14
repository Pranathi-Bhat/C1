#include<stdio.h>

int main(){
    int x=10;
    int* y=&x;
    printf("%p\n",y);
    *y=30;
    printf("%d",x);
    return 0;
}