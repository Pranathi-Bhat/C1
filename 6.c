#include<stdio.h>
#include<math.h>

int main(){
    const double PI=3.1415926536;
    double radius=0;
    double circum=0;
    printf("Enter radius in meters: ");
    scanf("%lf",&radius);

    circum=2*PI*radius;
    printf("The circumference is: %lf",circum);
    return 0; 
}