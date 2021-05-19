#include <stdio.h>
#include <stdlib.h>

int main(){

  int vet[8],x=0,y=0;

  printf("Please, fill the values:\n");
  for(int index=0; index<8; index++){
    scanf("%d", &vet[index]);
  }

  printf("Please,insert a vlue to X and Y:\n");
  scanf("%d %d", &x, &y);


  printf("%d\n", vet[x]);
  printf("%d\n", vet[y]);

}
