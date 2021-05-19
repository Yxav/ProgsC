#include <stdio.h>
#include <stdlib.h>

int main(){
  int vet[10], high=0, position=0;

  printf("Please, fill array\n");
  for(int index=0; index<10; index++){
    scanf("%d", &vet[index]);
  }

  high = vet[0];
  for(int index=0; index<10; index++){
    if(vet[index] > high){
      high = vet[index];
    }
  }

  for(int index=0; index<10; index++){
    if(vet[index]==high){
      position = index;
    }
  }

  printf("The high value is %d and be in %d position", high, position);


  return 0;
  
}
