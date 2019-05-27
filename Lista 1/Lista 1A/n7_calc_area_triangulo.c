#include <stdio.h>
#include <math.h>

int main()
{
	double l1, l2, l3, t, a, X;
	scanf("%lf%lf%lf", &l1, &l2, &l3);
	t = (l1 + l2 + l3) / 2.0;
	a = t * (t - l1) * (t - l2) * (t - l3);
	X = sqrt(a);
	printf("A AREA DO TRIANGULO E = %.2lf\n", X);
	return 0;
}
