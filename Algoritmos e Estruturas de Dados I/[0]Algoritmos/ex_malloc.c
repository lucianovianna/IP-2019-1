#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct { int cod;
	             char nome[40];
	             char data[11];
	             float valor;
			 } produto;
typedef produto *ponteiro;

int main()
{ //produto prod;
  ponteiro p;
  p = (ponteiro) malloc(sizeof(produto));
  if (!p)
     {printf("Falha na alocacao\n");
	  exit(1);
  } else { printf("entre com o codigo: \n");
	       scanf("%d",&p->cod);
	       printf("entre com o nome do produto: \n");
	       scanf("%s",p->nome);
	        printf("entre com o data do produto: \n");
	       scanf("%s",p->data);
	        printf("entre com o valor do produto: \n");
	       scanf("%f",&p->valor);
	      }
 printf("O produto %s tem validade ate %s e com valor %.2f\n",p->nome,p->data,p->valor);
 free(p);
 	return 0;
}