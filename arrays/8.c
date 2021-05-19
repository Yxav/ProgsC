#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[6];
 
 printf("Insert values, please:\n");
 for(int index=0; index<6; index++){
  scanf("%d", &A[index]);
 } 

 for(int index=5; index>=0; index--){
  printf("%d ", A[index]);
 }

 return 0;
}
