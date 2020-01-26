#include <stdio.h>
#include <math.h>

long long int fat(int n) {
	if(n < 2)
		return n = 1;
	else
		return n * fat(n-1);	//return (n < 2) ? 1 : n * fat(n-1); 
	}


int main()
{
	double x, z = 0.0;
	int n, i, j;
	scanf("%lf%d", &x, &n);

	for(i = 0; i <= n; i++ )
	{
		z = z + ( ( pow(-1.0 , i) * pow(x, (2.0*i)) ) / (fat(2*i)) ); 
		//printf("\n\t%ld", fat(2*i)); //debug
	}

		printf("cos(%.2lf) = %.6lf\n", x, z );
	
	return 0;
}










