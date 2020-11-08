#include <stdio.h>
#include <stdlib.h>
#define MAX 100


typedef struct {
	int cod;
	char nome_p[40];
	char tel_p[20];
	char email[50];
	char endereco[60];
} Pessoa;

typedef struct {
	Pessoa item[MAX];
	int primeiro, ultimo, tamanho;
} Lista_estatica;


void criarListaVazia(Lista_estatica *L)
{
	L->primeiro = 0;
	L->ultimo = 0;
	L->tamanho = 0;
}

int verificaListaVazia(Lista_estatica L)
{
	return (L.primeiro == L.ultimo);
}

int verificaListaCheia(Lista_estatica L)
{
	return (L.ultimo == MAX);
}

void insereElementoLista(Lista_estatica *L, Pessoa X)
{
	int i, j;

	if(verificaListaCheia(*L)) {
		printf("\n- A LISTA ESTÁ CHEIA - \n\n");
	}
	else 
	{
		i = L->primeiro;

		while( (i < L->ultimo) && (X.cod > L->item[i].cod) ) {
			i++;
		}

		if(i == L->ultimo) {
			L->item[i] = X;
		}
		else {
			for (j = L->ultimo; j > i; --j)
			{
				L->item[j] = L->item[j-1];
			}
			L->item[i] = X;
		}

		L->ultimo++;
		L->tamanho++;
		
		printf("\nINSERCAO REALIZADA COM SUCESSO\n\n");
	}
}

void removeElementoLista(Lista_estatica *L, Pessoa *X)
{
	int i, j;

	if(verificaListaVazia(*L)) {
		printf("\n- A LISTA ESTA VAZIA - \n");
	}
	else 
	{
		i = L->primeiro;

		while( (i < L->ultimo) && (X->cod > L->item[i].cod) ) {
			i++;
		}

		if((i == L->ultimo) || (X->cod != L->item[i].cod)) 
		{
			printf("\nO ELEMENTO NAO COM COD %d NAO ESTA NA LISTA\n\n", X->cod );
			return;
		}
		else
		{
			*X = L-> item[i];

			for (j = i; j < L->ultimo; ++j)
			{
				L->item[j] = L->item[j+1];
			}

			L->ultimo--;
			L->tamanho--;
		}
		printf("\nREMOCAO REALIZADA COM SUCESSO\n\n");
	}
}

void lerPessoa(Pessoa *X) 
{
	printf("\nLEITURA DA PESSOA\n");

	printf("Entre com o codigo: ");
	scanf("%d", &X->cod);

	getchar();
	printf("\nEntre com o nome:");
	fgets(X->nome_p, 40, stdin);

	printf("\nEntre com o telefone:");
	fgets(X->tel_p, 20, stdin);

	printf("\nEntre com o e-mail:");
	fgets(X->email, 50, stdin);

	printf("\nEntre com o endereco:");
	fgets(X->endereco, 60, stdin);
}

void exibirPessoa(Pessoa X)
{
	printf("============================\n");
	printf("Individuo %d\n\n", X.cod);
	printf("Nome: %s\n", X.nome_p);
	printf("Telefone: %s\n", X.tel_p);
	printf("E-mail: %s\n", X.email);
	printf("Endereco: %s", X.endereco);
	printf("============================\n");
}

void exibirLista(Lista_estatica L)
{
	int i;

	if(verificaListaVazia(L)) {
		printf("\nLISTA ESTA VAZIA\n\n");
	}
	else {
		for (i = L.primeiro; i < L.ultimo; ++i)
		{
			exibirPessoa(L.item[i]);
		}
	}
}

void consultarElemento(Lista_estatica L, int j) 
{
	int i = L.primeiro;

	while((i<L.ultimo) && (j>L.item[i].cod)){
		i++;
	}
	
	if(i == L.ultimo || j != L.item[i].cod) {
		printf("\nO ELEMENTO NAO COM COD %d NAO ESTA NA LISTA\n\n", j);
	}
	else {
		exibirPessoa(L.item[i]);
	}
}

void menu()
{	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("1 - Insere elemento na lista\n");
	printf("2 - Remover elemento na lista\n");
	printf("3 - Consultar um elemento na lista\n");
	printf("4 - Exibir os elementos da lista\n");
	printf("7 - Sair da lista\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Opcao: ");
}

int main()
{
	Lista_estatica L;
	Pessoa X;

	criarListaVazia(&L); // init

	int op, i, j;

	do
	{
		menu();
		scanf("%d", &op);

		switch(op){
			case 1:
				lerPessoa(&X);
				insereElementoLista(&L, X);
				break;
			case 2:
				printf("\nEntre com o codigo desejado para remover: ");
				scanf("%d", &j);
				X.cod = j;
				removeElementoLista(&L, &X);
				break;
			case 3:
				printf("\nEntre com o codigo que deseja consultar: ");
				scanf("%d", &j);
				
				consultarElemento(L, j);
				break;
			case 4:
				exibirLista(L);
				break;
			case 7:
				printf("\nObrigado por utilizar nosso programa!\n");
				break;
			default: printf("\nEntre com a opcao correta, por favor\n");
		}
	} while(op != 7);


	return 0;
}