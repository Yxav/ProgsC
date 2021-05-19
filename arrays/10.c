#include <stdio.h>
#include <stdlib.h>

#define TOTAL 15

int main(){
  float A[TOTAL], sum=0;
 
 printf("Insert values, please:\n");
 for(int index=0; index<15; index++){
  scanf("%f", &A[index]);
 } 

 for(int index=0; index<15; index++){
  sum += A[index];
 }

 printf("The average is %.2f", sum/TOTAL);
 return 0;
}
