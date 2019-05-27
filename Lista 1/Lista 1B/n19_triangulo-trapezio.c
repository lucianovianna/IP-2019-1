#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, y, z;
	scanf("%f%f%f",&a ,&b, &c);
	if(b <= c)
		x = c - b;
	else
		x = b - c;
//
	if(a <= c)
		y = c - a;
	else
		y = a - c;
//
	if(a <= b)
		z = b - a;
	else
		z = a - b;
//
	if(x < a && x < (b + c) && y < b && y < (a + c) && z < c && z < (a + b))
		printf("Perimetro = %.1f\n", truncf((a + b + c) * 100) / 100);
	else
		printf("Area = %.1f\n", truncf( (((a + b) * c) / 2) * 100) / 100);
	return 0;
}

/*
condição de existencia dos triangulos:

| b - c | < a < b + c;
| a - c | < b < a + c;
| a - b | < c < a + b;
*/
