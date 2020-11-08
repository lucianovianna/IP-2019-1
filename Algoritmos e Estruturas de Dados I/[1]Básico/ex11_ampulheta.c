#include <stdio.h>
#include <stdlib.h>

int matriz[6][6];

int ampulheta(int linha, int coluna)
{
	int contador = 0, k, i;

	contador += matriz[linha+1][coluna+1];

	for (k = 0; k < 2; k++)
	{
		for (i = coluna; i < coluna+3; i++)
		{
			contador += matriz[linha][i];
		}
		linha += 2;
	}

	return contador;
}


int main()
{
	int i, j;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int maior = -1000000000;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if(matriz[i][j] != 0) {
				int valor = ampulheta(i, j);

				if(valor > maior) {
					maior = valor;
				}
			}
		}
	}

	printf("%d\n", maior);

	return 0;
}