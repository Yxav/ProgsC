
#include <stdio.h>
#include <stdlib.h>

int main(){
  
  float vet[10], vet_double[10];

  printf("Please, fill the values:\n");
  for(int index=0; index<10; index++){
    scanf("%f", &vet[index]);
  }

  for(int index=0; index<10; index++){
    vet_double[index] = vet[index] * vet[index]; 

  }

  for(int index=0; index<10; index++){
    printf("\n%.2f", vet_double[index]);
  }
  return 0;

}
