/*

*/

#include <stdio.h>
#include <math.h>

int main() 
{
float c, smin, kw, c1, c2, d;
	scanf("%f", &smin);
	scanf("%f", &c);
	kw = (smin * 0.70) / 100;
	c1 = c * kw;
	c2 = c1 / c;
	d = c1 * 0.90;
	printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n", truncf(c2*100.0)/100.0, truncf(c1*100.0)/100.0, truncf(d*100.0)/100.0);

}

