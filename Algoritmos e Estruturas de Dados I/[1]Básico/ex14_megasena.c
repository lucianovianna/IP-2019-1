#include <stdio.h>



int main()
{
	int n, i , j;
	scanf("%d", &n);
	int jogos[6][6];

	for ( i = 0; i < n+1; i++)
	{
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &jogos[i][j]);
		}
	}
	
	// jogos[n+1][j]: resultado da megasena!
	int sena = 0, quina = 0, quadra = 0;

	for (i = 1; i < n; i++)
	{
		int acertos = 0;
		for (j = 0; j < 6; j++)
		{
			if(jogos[i][j] == jogos[n+1][j])
			{
				acertos++;
			}
		}
		if(acertos == 6) {
			sena++;
		}
		else if(acertos == 5) {
			quina++;
		}
		else if(acertos == 4) {
			quadra++;
		}
	}
	
	(sena == 0) ? printf("Nao houve ganhadores para a sena\n") :  printf("Houve %d acertador(es) para a sena\n", sena);

	(quina == 0) ? printf("Nao houve ganhadores para a quina\n") :  printf("Houve %d acertador(es) para a quina\n", quina);

	(quadra == 0) ? printf("Nao houve ganhadores para a quadra\n") : printf("Houve %d acertador(es) para a quadra\n", quadra);

	return 0;
}