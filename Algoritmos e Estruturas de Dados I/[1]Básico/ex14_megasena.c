#include <stdio.h>



int main()
{
	int n, i , j, k, aux;
	scanf("%d", &n);
	int jogos[n+1][6];

	for ( i = 0; i < n+1; i++)
	{
		// fazendo a leitura e já ordenando
		j = 0;
		scanf("%d", &jogos[i][j]);
		j++;
		while (j < 6) 
		{
			k = j;
			scanf("%d", & jogos[i][j]);
			while ((k > 0) && (jogos[i][k] < jogos[i][k - 1])) 
			{
				aux = jogos[i][k - 1];
				jogos[i][k - 1] = jogos[i][k];
				jogos[i][k] = aux;
				k--;
			}
			j++;
		}
	}
	
	int sena = 0, quina = 0, quadra = 0;

	for (i = 0; i < n; i++)
	{
		int acertos = 0;
		for (j = 0; j < 6; j++)
		{
			// jogos[n][k]: resultado da megasena!
			k = 0;
			while ( (k < 6 && (jogos[i][j] > jogos[n][k])) ) k++;

			if ( (k != 6) && (jogos[i][j] == jogos[n][k]) ) acertos++;
		}

		if(acertos == 6) sena++;
		else if(acertos == 5) quina++;
		else if(acertos == 4) quadra++;
	}
	
	(sena == 0) ? printf("Nao houve acertador para sena\n") :  printf("Houve %d acertador(es) da sena\n", sena);

	(quina == 0) ? printf("Nao houve acertador para quina\n") :  printf("Houve %d acertador(es) da quina\n", quina);

	(quadra == 0) ? printf("Nao houve acertador para quadra\n") : printf("Houve %d acertador(es) da quadra\n", quadra);

	return 0;
}