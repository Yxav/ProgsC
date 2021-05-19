#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int vet[10], even=0;

  printf("Please, fill array:\n");
  for(int index=0; index<10; index++){
    scanf("%d", &vet[index]);
  }

  for(int index=0; index<10; index++){
    if(vet[index] % 2 == 0){
      even++;
    }
  }

  printf("%d even numbers\n", even);

}


