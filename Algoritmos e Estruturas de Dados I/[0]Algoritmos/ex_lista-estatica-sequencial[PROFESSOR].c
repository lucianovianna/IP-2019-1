#include <stdio.h>
#include <stdlib.h>
#define MAX 100


typedef struct { int cod;
				 char nome_p[40];
				 char tel_p[15];
				 char e_mail[50];
				 char endereco[60];
			 }Pessoa;
			 
typedef struct {Pessoa item[MAX];
				int prim, ult, tam;
			   }Lista_est;

void Criar_Lista_vazia(Lista_est *L) {
	L->prim = 0;
	L->ult = 0;
	L->tam = 0;
}


int Verifica_lista_vazia(Lista_est L)
   {return(L.prim==L.ult);
}

int Verifica_lista_cheia(Lista_est L)
  {
	  return(L.ult==MAX);
   }
//TAD LISTA LINEAR ESTATICA 
void Insere_elemento_lista(Lista_est *L, Pessoa X)
  { 
  	int i,j;
	if(Verifica_lista_cheia(*L))
	   printf("A LISTA ESTA CHEIA - INSERE\n");
	 else { i=L->prim;
			while((i < L->ult)&&(X.cod > L->item[i].cod))
			   i++;
			if(i==L->ult)
			  {L->item[i] = X;
			  }else { for(j=L->ult;j>i;j--)
						L->item[j]= L->item[j-1];
					   L->item[i] = X;
					   
					  }
		 L->ult++;
		 L->tam++;
		 printf("INSERCAO REALIZADA COM SUCESSO\n"); 
	 }

  }
  
void Remove_elemento_lista(Lista_est *L, Pessoa *X)
  { int i,j;
	if(Verifica_lista_vazia(*L))
	   printf("A LISTA ESTA VAZIA - REMOVE\n");
	  else { i=L->prim;
			 while((i<L->ult)&&(X->cod>L->item[i].cod))
				i++;
			 if((i==L->ult)||(X->cod!=L->item[i].cod))
				 printf("O ELEMENTO COM COD %d NAO ESTA NA LISTA - REMOVE\n",X->cod);
			   else { *X = L->item[i];
					  for(j=i;j<L->ult-1;j++)
						L->item[j]=L->item[j+1];
					  L->ult--;
					  L->tam--;
					 }
  }
}

void Ler_pessoa(Pessoa *X)
  { printf("LEITURA DA PESSOA\n");
	printf("Entre com o codigo: ");
	scanf("%d",&X->cod);
	getchar();
	printf("\nEntre com o Nome: ");
	fgets(X->nome_p,40,stdin);
	printf("\nEntre com o Telefone: ");
	fgets(X->tel_p,15,stdin);
	printf("\nEntre com o E-mail: ");
	fgets(X->e_mail,50,stdin);
	printf("\nEntre com o Endereco: ");
	fgets(X->endereco,60,stdin);
}

void Exibir_pessoa(Pessoa X)
  { printf("*********************************************************"); 
	printf("Pessoa com codigo  %d \n",X.cod);
	printf("Nome da Pessoa: %s \n",X.nome_p);  
	printf("Telefone: %s \n",X.tel_p);  
	printf("E-mail da Pessoa: %s \n",X.e_mail);  
	printf("Endereco da Pessoa: %s \n",X.endereco);  
	printf("*********************************************************"); 
	  
}

void Exibir_lista_estatica(Lista_est L)
  {int i;
	if(Verifica_lista_vazia(L))
	   printf("A LISTA ESTA VAZIA - EXIBIR LISTA\n");
	  else {  printf(" R E L A T O R I O    D A    L I S T A     E S T \n");
			  printf(" = = = = = = = = = = = = = = = = = = = = = = = = \n");
			  for(i=L.prim; i<L.ult;i++)
				 Exibir_pessoa(L.item[i]);
			   printf(" = = = = = = = = = = fim = = = = = = = = = = = = = = \n");
			 }
	}
void Menu()
 { printf("M E N U    D A    L I S T A    E S T\n");  
   printf("====================================\n");  
   printf("1 - Insere Elemento na Lista\n");  
   printf("2 - Remover Elemento na Lista\n");  
   printf("3 - Consultar um Elemento da Lista\n");
   printf("4 - Exibir os Elementos da Lista\n");
   printf("7 - Sair da Lista\n");
   printf("Opcao: \n");
 }  
	
int main() {
	Lista_est L;
	Pessoa X;
	int op, i,j;
 Criar_Lista_vazia(&L);	
 do{ Menu();
	 scanf("%d",&op);
	 switch (op){
		case 1:Ler_pessoa(&X);
			   Insere_elemento_lista(&L,X);
			   break;
		 case 2: printf("\nEntre com o codigo desejado para remover: \n");
				 scanf("%d",&j);
				 X.cod = j;
				 Remove_elemento_lista(&L,&X);
			   break;      
		 case 3: printf("\nEntre com o codigo que deseja conlsultar : \n");
				 scanf("%d",&j);
				 i=L.prim;
				 while((i<L.ult)&&(j>L.item[i].cod))
					i++;
				  if((i==L.ult)||(j!=L.item[i].cod))
					 printf("ELEMENTO NAO ENCONTRADO - CONSULTA\n");
					else Exibir_pessoa(L.item[i]);
			   break;      
		 case 4: Exibir_lista_estatica(L);
			   break; 
			   
		 default: printf("ENTRE COM O OPCAO CORRETA\n");   
				  break; 
		 case 7: printf("OBRIGADO POR UTILIZAR NOSSO SISTEMA\n");
				 break;
		 }      		        
	 
 }while(op!=7);	
	return 0;
}
 