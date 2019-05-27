#include <stdio.h>
#include <math.h>

int main()
{

	double m, a, t;
	scanf("%lf%lf%lf", &m, &a, &t);
	float v = (a * t) ;
	float x = v * 3.6;
	float y = (a * (t * t)) / 2;
	float z = ((m * 1000) * (v * v)) / 2;
	printf("VELOCIDADE = %.2f\nESPACO PERCORRIDO = %.2f\nTRABALHO REALIZADO = %.2f\n", truncf(x * 100) / 100, truncf(y * 100) /100, truncf(z * 100) / 100);
}
