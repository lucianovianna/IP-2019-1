#include <stdio.h>

#define MAX 60001

typedef struct {
	int id[MAX];
	int tamanho, inicio, fim;
} Fila;

void criarFilaVazia(Fila *F)
{
	F->tamanho = 0;
	F->inicio = 0;
	F->fim = 0;
}

void enfileirar(Fila *F, int newId)
{
	if((F->tamanho == MAX-1)) {
		// printf("A FILA ESTA CHEIA - ENFILEIRAR\n");
	}
	else 
	{
		F->id[F->fim] = newId;
		F->fim = (F->fim+1) % MAX;
		F->tamanho++;
	}
}

void desenfileirar(Fila *F)
{
	if((F->fim == F->inicio)) {
		// printf("A FILA ESTA VAZIA - desenfileirar\n");
	}
	else 
	{
		F->tamanho--;
		F->inicio = (F->inicio+1) % MAX;
	}
}

int main()
{
	Fila F1;
	Fila F2;

	int n, m, i, j, k;

	criarFilaVazia(&F1);
	criarFilaVazia(&F2);

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int id;
		scanf("%d", &id);
		enfileirar(&F1, id);
	}
	scanf("%d", &m);
	int desistentes[m];
	for (i = 0; i < m; i++)
	{
		scanf("%d", &desistentes[i]);
	}
	
			// enquanto a fila não estiver vazia
	while(!(F1.fim == F1.inicio)) 
	{
		i = 0;
		while ((i < m) && (F1.id[F1.inicio] != desistentes[i])) i++;

		if ((i >= m) || (F1.id[F1.inicio] != desistentes[i])) {
			enfileirar(&F2, F1.id[F1.inicio]);
		}
		desenfileirar(&F1);
	}

	for (i = 0; i < n-m-1 ; i++) {
		printf("%d ", F2.id[i]);
		desenfileirar(&F2);
	}
	printf("%d\n", F2.id[i]);
	


	return 0;
}