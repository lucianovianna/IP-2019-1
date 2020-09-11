#include <stdio.h>



int main()
{
	int vetor[10000];
	int n, i, j, count = 0;

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &vetor[i]);
	}


	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("i: %d j: %d v[i]: %d  v[j]%d\n", i, j, vetor[i], vetor[j]);
			if(j == i) continue;

			if(i != n-1 && vetor[i] == vetor[j]) {
				printf("repitido\n");
				break;
			}
			else if(j == n-1) 
			{
				printf("unico\n");
				// printf("\n%d\n", vetor[i]);
				count++;
			}
		}
	}

	printf("%d\n", count);


	return 0;
}