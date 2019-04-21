#include <stdio.h>

int main()
{
	long int n;
	int i;
	
	scanf("%ld", &n);
	while(n <= 1){
		printf("Fatoracao nao e possivel para o numero %ld!\n", n);
		scanf("%ld", &n);}
	
	printf("%ld = ", n);
	while(n != 1)
	{
		while( (n%2) == 0 )
		{
			printf("2");
			n = n/2;
			if(n != 1)
				printf(" x ");
		}
		
		for(i = 3; i <= n; i++)		//(i = 3; i <= (n/2); i+=2)
		{
			while( (n%i) == 0 )
			{
				printf("%ld", i);
				n = n / i;
				if(n != 1)
					printf(" x ");
			}
		}
		/*if(n != 1){
			printf("%ld", n);
			n = n / n;}*/
	}
		
	printf("\n");
	return 0;
}











