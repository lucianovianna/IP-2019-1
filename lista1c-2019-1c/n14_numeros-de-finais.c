#include <stdio.h>


int main()
{
	int n;
	scanf("%d", &n);
	if(n <= 1)
		printf("Campeonato invalido!\n");
	
	int i, y=1, j = 2, k = 1;
	while(n != 1)
	{
		for(i = 1; i < n; i++)
		{
			printf("Final %d: Time%d X Time%d\n", y,k, j);
			y++;
			j++;
			

		}
		k++;
		j= k+1;
		n--;

 	}
	return 0;
}

/*


*/
















