#include <stdio.h>
#include <stdlib.h>
#define TOTAL 5

int main(){
  int vet[TOTAL], high=0, low=0, positionH=0, positionL=0;

  printf("Please, fill array");
  
  for(int index=0; index<TOTAL; index++){
    scanf("%d", &vet[index]);
  }

  high = vet[0];
  low = vet[0];
  for(int index=0; index<TOTAL; index++){
    if(vet[index] > high){
      high = vet[index];
    }else{
      if(vet[index] < low){
        low = vet[index];
      }
    } 
  }
  
  for(int index=0; index<TOTAL; index++){
    if(vet[index] == high){
      positionH = index;
    } else{
        if(vet[index] == low){
          positionL = index;
        }
    }
  }

  printf("The highest value is in %d\n", positionH);
  printf("The lowest value is in %d\n", positionL);

 return 0;
}
