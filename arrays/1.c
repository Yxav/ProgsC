#include <stdio.h>
#include <stdlib.h>


int main(){
	int A[6] = {1,0,5,-2,-5,7}, sum=0;
	sum = A[0] + A[1] + A[5];
	
	printf("%d \n\n", sum);

	A[4] = 100;
	printf("%d \n", A[4]);
	for(int index=0; index<6; index++){
		printf("%d \n", A[index]);
	}
  //
	return 0;	
}

