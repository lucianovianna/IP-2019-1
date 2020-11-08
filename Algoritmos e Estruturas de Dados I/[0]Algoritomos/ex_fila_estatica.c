#include <stdio.h>
#define MAX 101


typedef struct {
	int chave;
	char nome[40];
} Elemento;

typedef struct {
	Elemento elem[MAX];
	int tamanho, inicio, fim;
} Fila;

void criarFilaVazia(Fila *F)
{
	F->tamanho = 0;
	F->inicio = 0;
	F->fim = 0;
}

int verificaFilaVazia(Fila F)
{
	return (F.fim == F.inicio);
}

int verificaListaCheia(Fila F)
{
	return (F.tamanho == MAX-1);
}

void enfileirar(Fila *F, Elemento X)
{
	if(verificaListaCheia(*F)) {
		printf("A FILA ESTA CHEIA - ENFILEIRAR\n");
	}
	else 
	{
		F->elem[F->fim];
		F->fim = (F->fim+1) % MAX;
		F->tamanho++;
	}
}

void desenfileirar(Fila *F, Elemento *X)
{
	if(verificaFilaVazia(*F)) {
		printf("A FILA ESTA VAZIA - desenfileirar\n");
	}
	else 
	{
		*X = F->elem[F->inicio];
		F->tamanho;
		F->inicio = (F->inicio+1) % MAX;
	}
}

void exibirElemento(Elemento X)
{
	printf("-------------------\n");
	printf("\n CHAVE = %d\n", X.chave);
	printf(" NOME = %s\n", X.nome);
}

void exibirFila(Fila F)
{
	Elemento E;
	Fila fa;
	fa = F;

	printf("_____ INICIO DA FILA _____\n");
	while(!verificaFilaVazia(fa))
	{
		desenfileirar(&fa, &E);
		exibirElemento(E);
	}
	printf("_____  FIM DA FILA  _____\n");
}



Elemento buscaElemento(Fila F, int ch)
{
	Elemento E;
	Fila fa;

	fa = F;
	while(!verificaFilaVazia(fa))
	{
		desenfileirar(&fa, &E);
		if(ch == E.chave) {
			return E;
		}
	}

		printf("Elemento chave = %d nao esta na fila\n", E.chave);

		E.chave = 0;
		return E;
	
}

void Menu()
{
	printf("---------------------------------\n");
	printf("1 - Novo cadastro\n");
	printf("2 - Exibir fila\n");
	printf("3 - Buscar elemento na fila\n");
	printf("4 - Remover o proximo da fila\n");
	printf("7 - Sair do programa\n");
	printf("---------------------------------\n");
}


int main()
{
	Fila F;
	Elemento E;
	int op;

	criarFilaVazia(&F);

	do 
	{
		Menu();
		scanf("%d", &op);

		switch(op)
		{
			case 1:
				printf("Entre com a chave: ");
				scanf("%d", &E.chave);
				getchar();
				printf("Entre com o nome\n:");
				fgets(E.nome, 40, stdin);

				enfileirar(&F, E);
				break;
			case 2:
				exibirFila(F);
				break;
			case 3:
				printf("Insira a chave do elemento q deseja buscaR:");
				int tmp; 
				scanf("%d", &tmp);
				buscaElemento(F, tmp);
				break;
			case 4:
				desenfileirar(&F, &E);
				break;

			default: printf("ENTRE COM A OPCAO CORRETA\n");   
				break; 

			case 7: printf("OBRIGADO POR UTILIZAR NOSSO SISTEMA\n");
				break;
		}

	} while(op != 7);


	return 0;
}