#include <stdio.h>

#include <stdlib.h>


int main() {
  int i, j, x, N;

  scanf("%d", &N);
  int vet[N];
  
  for(i = 0; i < N; i++)
    scanf("%d", &vet[i]);


  for (i = 0; i < N - 1; i++)
    printf("%d ", vet[i]);
  printf("%d\n\n", vet[i]);
  
  printf("Entre com um valor que deseja buscar no vetor:\n");
  scanf("%d", &x);

  i = 0;
  while ((i < N) && (x != vet[i])) i++;

  if ((i == N) || (x != vet[i]))
    printf("O valor %d nao esta no vetor!!!!\n", x);
  else
    printf("O valor %d esta na posicao %d do vetor!!!!\n", x, i + 1);


  return 0;
}