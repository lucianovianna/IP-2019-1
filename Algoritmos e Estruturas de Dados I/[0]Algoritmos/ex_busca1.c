#include <stdio.h>
#define N  5


int  main() {
  int mat[N][N], i, j, x, lin;
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
       scanf("%d",&mat[i][j]);
       
   printf("Entre com um valor a ser consultado\n");
   
  scanf("%d", &x);
  
  i=0;
  while(i<N) {
    j=0;
    while((j<N)&&(x!=mat[i][j]))
        j++;
     if(j!=N)
      {
	   lin =i;
       i=N;
      }
   i++; 
  }
  
  if (i==N)
    printf("Valor %d nao esta na Matriz\n",x);
   else {i=lin;
	   printf("Valor %d esta na linha %d e coluna %d da Matriz\n",x,i+1,j+1);
   }
   
   return 0;
 }
 