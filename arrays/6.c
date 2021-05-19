#include <stdio.h>
#include <stdlib.h>

int main(){
  int vet[10], high=0, low=0;

  printf("Please, fill array");
  
  for(int index=0; index<10; index++){
    scanf("%d", &vet[index]);
  }


  high = vet[0];
  for(int index=0; index<10; index++){
    if(vet[index] > high){
      high = vet[index];
    }
  }
  low = vet[0];
  for(int index=0; index<10; index++){
    if(vet[index] < low){
      low = vet[index];
    }
  }
  printf("%d\n", high);
  printf("%d\n", low);

 return 0;
}
