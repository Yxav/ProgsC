#include <stdio.h>
#include <stdlib.h>

int main(){
  float vet[10];
  int negatives=0, positives=0;

  printf("Please, fill array\n");
  for(int index=0; index<10; index++){
    scanf("%f", &vet[index]);
  }

  
  for(int index=0; index<10; index++){
    if(vet[index] > 0){
      positives++;
    } else {
      negatives++;
    }
  }


  printf("Positive values are %d and negatives are %d\n", positives, negatives);
  
  return 0;
  
}
