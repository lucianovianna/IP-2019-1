#include <stdio.h>

int main() 
{
	int n, z, y1, y2, y3;
	scanf("%d", &n);
	y1 = n / 100;
	y2 = (n % 100) / 10;
	y3 = n % 10;
	z = (y1 + (y2 * 3) + (y3 * 5)) % 7;
	printf("O NOVO NUMERO E = %d\n", (y1 * 1000) + (y2 * 100) + (y3 * 10) + z);
	return 0;

}









