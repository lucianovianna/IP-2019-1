#include <stdio.h>

int main()
{
	double cachep  = 0, cachei = 0;
	int c1=0, c2=0, n;
	
	do {
		scanf("%d", &n);

		 if( (n%2) != 0 || n == 1 && n != 0){
			cachei += n;
			c2++;}
		else if (n != 0 && (n%2) == 0){
			cachep += n;
			c1++;}
	} while(n != 0 );
	
	//printf("\n%lf\t%d\t%lf\t%d", cachep, c1, cachei, c2);
	
	double m1 = cachep / c1, m2 = cachei / c2;
	printf("MEDIA PAR: %.2lf\nMEDIA IMPAR: %.2lf\n",m1,m2);
	
	return 0;
}

