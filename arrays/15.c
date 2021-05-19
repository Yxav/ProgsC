#include <stdio.h>
#include <stdbool.h>

#define TOTAL 20

int main(){
	int A[TOTAL];
	bool repeated;

	printf("Please, fill this array with valids value:\n");
	for(int index=0; index<TOTAL; index++){
		scanf("%d", &A[index]);
	}

	for(int index=0; index<TOTAL; index++){
		repeated = false;
		for(int index1=0; index1<index; index1++){
			if(A[index] == A[index1]){
				repeated = true;
				break;
			}
		}
		if(!repeated){
			printf("%d ", A[index]);
		}
	}

	return 0;
}


