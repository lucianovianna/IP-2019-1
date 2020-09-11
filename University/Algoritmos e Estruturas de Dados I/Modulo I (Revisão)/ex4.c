#include <stdio.h>



int main()
{
	int n, k, i, count = 0, pontuais[10000];

	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; ++i)
	{
		int tmp;
		scanf("%d", &tmp);

		if(tmp <= 0){
			pontuais[count] = i;
			count++;
		}
	}

	if(count >= k) 
	{
		printf("NAO\n");
		for (i = count-1; i >= 0; --i)
		{
			printf("%d\n", pontuais[i]);
		}
	}
	else 
	{
		printf("SIM\n");
	}


	return 0;
}