#include <stdio.h>
#include <stdlib.h>
#define N 10
//    12    8   17    4   33   50   22   15   5   10

int main() {
	int i, j, x, vet[N];

	scanf("%d",vet);
	i=1;
	while(i<N) {
	  j=i;
	  scanf("%d", &vet[i]);
	  while((j>0)&&(vet[j]<vet[j-1])) {
		x = vet[j-1];
		vet[j-1]=vet[j];
		vet[j] = x;
		j--;
	 }
	 i++;
 }
 
    for(i=0;i<N-1;i++)
       printf("%d ",vet[i]);
    printf("%d\n",vet[i]);
	printf("Entre com um valor que deseja buscar no vetor\n");
	scanf("%d",&x);
	i=0;
	while((i<N)&&(x>vet[i]))
	   i++;
	
	if((i==N)||(x!=vet[i]))
	  printf("O valor %d nao esta no vetor!!!!\n",x);
	 else 
       printf("O valor %d esta na posicao %d do vetor!!!!\n",x,i+1);
    
return 0;
}