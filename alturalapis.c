#include <stdio.h>
#include <stdlib.h>


int main()
{

int a,o;
    printf("Digite a altura da sua piramide:\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int l = 0; l < (a - i); l++)
        {
            printf(" ");
        }
        for (int m = 0; m < (i + (i-1)); m++)
        {
            printf("*");
            
        }
        for (int l = 0; l < (a - i); l++)
        {
            printf(" ");
        }
        printf("\n");

        o=(i + (i-1));
    }


    for (int i = 0; i < a; ++i)
    {
    	for (int i = 0; i < o ; ++i)
    	{
    		printf("*");
    	}
    	printf("\n");
    }



	return 0;
}