#include <stdio.h>
#include <stdlib.h>
#define TOTAL 5
int main(){
  float vet[TOTAL], high=0, low=0, sum=0;

  printf("Please, fill array");
  
  for(int index=0; index<TOTAL; index++){
    scanf("%f", &vet[index]);
    sum += vet[index];
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
    printf("%1.f\n", vet[index]);
  }
  


  printf("%f\n", sum/TOTAL);
  printf("%.1f\n", high);
  printf("%.1f\n", low);

 return 0;
}
