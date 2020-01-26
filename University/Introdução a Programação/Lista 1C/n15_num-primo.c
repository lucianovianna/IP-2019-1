#include <stdio.h>

int main()
{
	int i, c=0;
	long int n;
	scanf("%ld", &n);
	if(n <= 0){
		printf("Numero invalido!");}
	else{
	
	for(i = 2; i <= n; i++)
	{
			//printf("\t%d\n",i);
			if( (n%i) == 0 ){
				c++;}
			else if(c > 1){
				break;}
	}
	
	if(c == 1)
		printf("PRIMO\n");
	else
		printf("NAO PRIMO\n");
	
	}
	return 0;
}
