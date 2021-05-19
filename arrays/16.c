#include <stdio.h>
#include <stdbool.h>

#define TOTAL 5

int main(){
	int A[TOTAL], code;
	bool repeated;

	printf("Please, fill this array with valids value:\n");
	for(int index=0; index<TOTAL; index++){
		scanf("%d", &A[index]);
	}

	printf("Please, choose an option:\n0-End program\n1-show array\n2-Show reverse array");
	scanf("%d", &code);

  if(code == 0){
    return 0;
  } else {
  while(code != 1 && code != 2){
    printf("INVALID CODE!!\n");
    printf("Please, choose an option:\n0-End program\n1-show array\n2-Show reverse array");
    scanf("%d", &code);
  }
     if(code==1){
       for(int index=0; index<TOTAL; index++){
          printf("%d ", A[index]);
        }
      } 
     if(code==2){
        for(int index=TOTAL-1; index>=0; index--){
          printf("%d ", A[index]);  
        }
     }
  }
  return 0; 
  } 
