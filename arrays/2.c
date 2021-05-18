#include <stdio.h>
#include <stdlib.h>

int main() {
  int vet[6];

  printf("Please, insert numbers: \n");
  for(int index=0; index<6; index++){
    scanf("%d", &vet[index]);  
  }
  
  printf("Here an array with your numbers \n");
  for(int index=0; index<6; index++){
    printf("%d\n", vet[index]);  
  }

  
  return 0;
}
