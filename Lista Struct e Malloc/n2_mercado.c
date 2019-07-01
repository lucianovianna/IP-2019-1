#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Feira {
	char prod[50];
	double valor;
};


int main(){
	int n, m, p, i, j, k;
	scanf("%d", &n);
	
	for(k=0; k<n; k++){
		scanf("%d", &m);
		struct Feira mercado[m];
		for(i=0; i<m; i++){
			scanf("%s",mercado[i].prod);
			scanf("%lf", &mercado[i].valor);
		}
		
		scanf("%d", &p);
		char c[51];
		int qntd;
		double pay=0;
		
		for(j=0; j<p; j++){
			scanf("%s", c);
			scanf("%d", &qntd);
			for(i=0; i<m; i++){
				if(strcmp(c, mercado[i].prod) == 0){
					pay += mercado[i].valor * qntd;
					break;
				}
			}
		}
		printf("R$ %.2lf\n", pay);
	}

	return 0;
}








