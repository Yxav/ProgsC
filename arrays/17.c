#include <stdio.h>
#define TOTAL 10

int main(){
  int vet[TOTAL], value=0;

  printf("Please, insert values");
  for(int index=0; index<TOTAL; index++){
    scanf("%d", &value);
    if(value<0){
      vet[index] = 0;
    } else {
      vet[index] = value;
    }
  }


  for(int index=0; index<TOTAL; index++){
    printf("%d ", vet[index]);
  }

  return 0;
}
