#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, rf, vs, ri, vi,i, voa,vo,op;
	vo=0;
	voa=0;
	printf("Insira o valor da tensao da fonte(VS) e resistor de realimentação (RF)\n");
	scanf("%d %d", &vs, &rf);

	printf("Quantas entradas possui esse AMP OP?\n");
	scanf("%d", &n);



	for (int i = 1; i <= n; ++i)
	{
		printf("Digite o valor da tensão de entrada:\n");
		scanf("%d", &vi);
		printf("Digite o valor da resistor de entrada:\n");
		scanf("%d", &ri);
		vo=-(rf/ri)*vi;
		voa=voa+vo;
	}
		printf("O resultado e: %d\n\n\n\n",voa);

	printf("Deseja realizar um novo cálculo?\n 1.Sim\n2. Nao");
	scanf("%d", &op);


		if (op==2)
		 {
				printf("O programa divisor resistivo será encerrado\n"); 			 } 



		if (op==1)
		{
			printf("\e[H\e[2J");
			while(op==1){
				for (int i = 0; i <= n; ++i){
		printf("Digite o valor da tensão de entrada:\n");
		scanf("%d", &vi);
		printf("Digite o valor da resistor de entrada:\n");
		scanf("%d", &ri);
		vo=-(rf/ri)*vi;
		voa=voa+vo;
			}
		}

		

}
return 0;
}