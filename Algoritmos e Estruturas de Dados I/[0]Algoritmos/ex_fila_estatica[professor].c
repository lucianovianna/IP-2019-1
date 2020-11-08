#include <stdio.h>
#define MAX 101

typedef struct {int chave;
                char Nome[40];
                }ELEMENTO;
                
 typedef struct {ELEMENTO elem[MAX];
                  int tam, inicio,fim;
                  }FILA;
                  
  void criar_fila_vazia(FILA *F) {
     F->tam = 0;
     F->inicio = 0;
     F->fim=0;
    }               

int verifica_fila_vazia(FILA F) {
	return(F.fim==F.inicio);
}

int verifica_fila_cheia(FILA F)
  { return (F.tam==MAX-1);
}

void enfileirar(FILA *F, ELEMENTO X) {
	if(verifica_fila_cheia(*F))
	    printf("A FILA ESTA CHEIA - ENFILEIRAR\n");
	   else { F->elem[F->fim];
		      F->fim=(F->fim+1)%MAX;
		      F->tam++;
		  }
 }		  
	
void desenfileirar(FILA *F, ELEMENTO *X)
  {	if(verifica_fila_vazia(*F))
	   printf("A FILA ESTA VAZIA - DESENFILEIRAR\n");
	 else { *X = F->elem[F->inicio];
		    F->tam--;
		    F->inicio = (F->inicio+1) % MAX;
	 }
}
	  
void exibir_elemento(ELEMENTO x)
  { printf("********* CHAVE = %d ********\n",x.chave);
	printf(" NOME = %s",x.nome);
	printf("******************************\n");
  }
	
 void exibir_fila(FILA F) {

   FILA fa;
   fa = F;
   printf("**********INICIO DA FILA **************\n);
   while (Not verifica_fila_vazia(fa))
     {desenfileirar(&fa,&E);
       exibir_elemento(E);
      }
      printf("********** FINAL DA FILA **************\n);
  
 }   


 ELEMENTO busca_elemento(FILA F, int ch) {
   ELEMENTO E;
   FILA fa;
   fa = F;
   while (Not verifica_fila_vazia(fa))
     {desenfileirar(&fa,&E);
      if(ch==E.chave)
         return(E);
      }
      printf("Elemento de chave = %d nao esta na fila\n");
   E.chave = 0;
   return E;
 }   
               
int main() {
	
	
	
	
	return 0;
}