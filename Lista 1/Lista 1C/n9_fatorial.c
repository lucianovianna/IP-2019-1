#include <stdio.h>

int main()
{
	int i, n;
	double fat=1;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		fat = fat * (n - i);
	}
	
	printf("%d! = %.0lf\n",n , fat);
	return 0;
}

