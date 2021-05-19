#include <stdio.h>
#include <stdlib.h>

#define TOTAL 10

int main(){
  int A[TOTAL], repeat[TOTAL],controller=0;

  printf("Please, fill this array with valids value:\n");
  for(int index=0; index<TOTAL; index++){
    scanf("%d", &A[index]);   
  }


  for(int index=0; index<TOTAL; index++){
    for(int index1=0; index1<TOTAL; index1++){
      if(A[index] == A[index1] && index != index1){
        printf("%d ", A[index]);
      }
  }



  }

}
