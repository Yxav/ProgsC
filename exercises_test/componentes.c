#include <stdio.h>
#include <stdlib.h>


int componente ();
float calculo (int op, float total);




int main()
{
	char opi;
	int op,op2, qc;
	float res, cap, ind, dio, led, tr, otr, total;



/* Home Screen with the options*/
	op= componente();
	total = calculo(op,total);

	;

	do
	{
		printf("Deseja adicionar mais componentes ao carrinho?\n\n");
		printf("1 - Sim\n2 - Nao\n");
		scanf("%d", &op2);

		if (op2==1)
		{
			op= componente();
			total = calculo(op,total);
		}

		if (op2==2){
			printf("O total de sua compra e: R$ %.2f\n",total);
		}
	} while (op2 == 1);



	return 0;
}

int componente()
{
	int op;

	printf("Qual componente desejado?\n\n\n");
	printf("1 - Resistor\n");
	printf("2 - Capacitor\n");
	printf("3 - Indutor\n");
	printf("4 - Diodo\n");
	printf("5 - LED\n");
	printf("6 - Transistor\n");
	printf("7 - Outro\n\n\"");

	scanf("%d", &op);
	return op;
}

float calculo (int op,float total)
{
	int qc;
	float res, cap, ind, dio, led, tr, otr, total;

	res = 0.10;
	cap = 0.20;
	ind = 0.30;
	dio = 0.40;
	led = 0.50;
	tr =  0.60;
	otr = 0.70;
	total = 0;

	if (op==1)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * res);
	}


	if (op==2)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * cap);
	}

	if (op==3)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * ind);
	}

	if (op==4)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * dio);
	}


	if (op==5)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * led);
	}

	if (op==6)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * tr);
	}

	if (op==7)
	{
		printf("Quantidade de componentes\n");
		scanf("%d", &qc);
		total = total + (qc * otr);

	}
	return total;


}

