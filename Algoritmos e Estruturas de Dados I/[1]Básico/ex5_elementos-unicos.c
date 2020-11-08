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
		int token = 0;
		for (j = 0; j < n; ++j)
		{

			if(vetor[i] == vetor[j]) token++;

			if(token == 2) {
				break;
			}
			else if(j == n-1) {
				count++;
			}
		}
	}

	printf("%d\n", count);


	return 0;
}