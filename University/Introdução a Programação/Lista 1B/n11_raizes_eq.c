#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c; 
	float x1, x2;
	scanf("%d%d%d",&a,&b,&c);
	float delta = (b*b) - (4.0 * a * c);
	x1 = (b*-1.0)/(2.0*a); 
	
	if(delta < 0)
		printf("RAIZES IMAGINARIAS\n");
	else if(delta == 0)
		printf("RAIZ UNICA\nX1 = %.2f\n", x1);
	else if(delta > 0){
		x2 = ((b*-1.0) + sqrt(delta)) /(2.0*a);
		x1 = ((b*-1.0) - sqrt(delta)) /(2.0*a);
		printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
		
	}
	return 0;
}

/*
	a<b<c
	a<c<b
	b<a<c
	b<c<a
	c<a<b
	c<b<a
*/
