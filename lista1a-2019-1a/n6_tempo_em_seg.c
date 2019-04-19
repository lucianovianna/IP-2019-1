#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int x = ((a * 60) * 60) + (b * 60) + c;
	printf("O TEMPO EM SEGUNDOS E = %d\n", x);
	
	
}
