#include <stdio.h>
#define TOTAL 50

int main(){
  int vet[TOTAL];

  for(int index=0; index<TOTAL; index++){
      vet[index] = (index+(5*index)) % (index+1);
  }

  for(int index=0; index<TOTAL; index++){
    printf("%d ", vet[index]);
  }
  return 0;

  }
