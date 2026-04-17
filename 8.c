#include<stdio.h>
int main(){
    char name[50];
    puts("Enter your name: ");
    fgets(name, 50, stdin);
    puts("Your name is:");
    puts(name);
    return 0;
}
