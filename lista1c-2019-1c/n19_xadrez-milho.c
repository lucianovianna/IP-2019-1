#include <stdio.h>

int main()
{
	int n, n2, i, j, temp;
	scanf("%d", &n);
	n2 = n;
	temp = n;
	for(i=1; i < 32; i++){
		n = n + temp;
		//printf("\t\n%d", n);
	}
	for(j = 1; j < 32; j++){
		n2 = n2 + (temp*2);
		//printf("\t\n%d", c);
	}
	printf("%d\n", n2 + n);
	
	
	return 0;
}


/*
64 quadrados
b
p
b
p
b
p
b
p

*/
