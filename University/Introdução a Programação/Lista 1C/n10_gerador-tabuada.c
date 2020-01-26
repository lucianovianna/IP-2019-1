#include <stdio.h>

int main()
{
	double n, i, k, s, z;
	int j;
	scanf("%lf%lf%lf%lf",&n,&i,&k,&s);
	
	printf("Tabuada de soma:\n%.2lf + %.2lf = %.2lf\n", n, i , n+i);
	z = i;
	for(j = 1; j < k; j++)
	{
		z = z + s;
		printf("%.2lf + %.2lf = %.2lf\n", n, z, n + z);
	}
	
	printf("Tabuada de subtracao:\n%.2lf - %.2lf = %.2lf\n", n, i , n-i);
	z = i;
	for(j = 1; j < k; j++)
	{
		z = z + s;
		printf("%.2lf - %.2lf = %.2lf\n", n, z, n - z);
	}
	
	printf("Tabuada de multiplicacao:\n%.2lf x %.2lf = %.2lf\n", n, i , n*i);
	z = i;
	for(j = 1; j < k; j++)
	{
		z = z + s;
		printf("%.2lf x %.2lf = %.2lf\n", n, z, n * z);
	}
	
	printf("Tabuada de divisao:\n%.2lf / %.2lf = %.2lf\n", n, i , n/i);
	z = i;
	for(j = 1; j < k; j++)
	{
		z = z + s;
		printf("%.2lf / %.2lf = %.2lf\n", n, z, n / z);
	}
	return 0;
}

