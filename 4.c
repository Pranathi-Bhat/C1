#include<stdio.h>
#include<stdlib.h>

int* range1(int limit){
    int* range1=malloc(limit*sizeof(int));
    for(int i=0;i<limit+1;i++){
         range1[i] = i+1;
    }
   
    return range1;
}

int main(){
    int* list1 = range1(23);
    printf("%d \n",list1[1]);
    printf("%d",list1[10]);
    return 0;
}