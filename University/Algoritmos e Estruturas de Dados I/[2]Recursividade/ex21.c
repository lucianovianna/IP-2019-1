#include <stdio.h>


int naturaisRecursivo(int n)
{
	printf("%d\n", n);
	if(n == 0) return 0;
	// printf("%d ", n);
	int resposta = naturaisRecursivo(n-1) + 1;
	return printf("%d ", resposta);
}


int main()
{
	int n;
	scanf("%d", &n);

	naturaisRecursivo(n);

	return 0;
}