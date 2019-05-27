#include <stdio.h>

int main()
{
	int i,n, p;
	double pop, ger, arq, cad;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d%lf%lf%lf%lf",&p, &pop, &ger, &arq, &cad);
		printf("A RENDA DO JOGO N. %d E = %.2lf\n",(i+1) ,(p *(pop/100.0)) + ((p*(ger/100.0))*5.0) + ( ((arq/100.0)*p)*10.0) + ( (p*(cad/100.0))*20.0 ) );
	}
	return 0;
}
