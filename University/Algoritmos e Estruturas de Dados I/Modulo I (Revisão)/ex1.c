#include <stdio.h>



int main()
{
	int n , i, maior = -1, menor = 100000000;
	
	scanf("%d", &n);


	int vetor[n+10];
	for(i = 0; i < n; i++)
	{
		scanf("%d", &vetor[i]);


		if(vetor[i] > maior) maior = vetor[i];
		if(vetor[i] < menor) menor = vetor[i];
	}

	for ( i = 0; i < n; ++i)
	{
		printf("%d", vetor[i]);

		if(i < n-1) printf(" ");
	}

	printf("\n");

	for (i = n-1; i >= 0; i--)
	{
		printf("%d", vetor[i]);

		if(i > 0) printf(" ");
	}

	printf("\n%d\n%d\n", maior, menor);


	return 0;
}