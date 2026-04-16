#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    const double PI=3.1415926536;
    double radius=strtod(argv[1],NULL);
    double circum=0;

    circum=2*PI*radius;
    printf("The circumference is: %lf",circum);
    return 0; 
}