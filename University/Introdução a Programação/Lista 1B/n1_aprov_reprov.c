#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3, m;
	scanf("%f%f%f", &n1, &n2, &n3);
	m = (n1 + n2 + n3) / 3;
	if (m >= 6) 
		printf("MEDIA = %.2f\nAPROVADO\n", truncf(m * 100) / 100);
	else
		printf("MEDIA = %.2f\nREPROVADO\n", truncf(m * 100) / 100);
	return 0;
}
