#include <stdio.h>
#include <math.h>

int main()
{
	float p, x, y, z;
	scanf("%f%f%f", &p, &x, &y);
	x = p * (x / 100);
	y = p * (y / 100);
	z = p + (x + y);
	printf("O VALOR DO CARRO E = %.2f\n", z);
	return 0;
}
