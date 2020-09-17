#include <stdio.h>


void cpfVerif(int cpf[])
{
	int b1 = 0, b2 = 0, i, j;

	for (i = 1, j = 9; i <= 9; ++i, j--)
	{
		b1 += cpf[i] * i;
		b2 += cpf[i] * j;
	}

	b1 = (b1 % 11) % 10;
	b2 = (b2 % 11) % 10;

	if(b1 == cpf[10] && b2 == cpf[11]) printf("CPF valido\n");
	else printf("CPF invalido\n");
}



int main()
{
	int cpf[15];
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		for (j = 1; j <= 11; ++j)
		{
			scanf("%d", &cpf[j]);
		}
		
		cpfVerif(cpf);
	}

	return 0;
}