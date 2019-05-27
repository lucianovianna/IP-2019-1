#include <stdio.h>

int main()
{
	int n, n2, tmp;
	int count=0, i, max = 0;
	scanf("%d", &n);
	
	scanf("%d", &n2);
	tmp = n2;
	for(i=1; i < n; i++)
	{
		scanf("%d", &n2);
		if(tmp == n2)
		{
			count++;
			if(count > max){
				max = count;}
		} else
			count = 0;
		tmp = n2;
	}
	//if (max > 0)
	//	max++;	//(max > 0) ? max++ : max = 0;
	printf("A maior subsequencia de elementos iguais possui %d elementos.\n", max+1);
	
	return 0;
}

