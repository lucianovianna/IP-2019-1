#include <stdio.h>


int main(){

	int n, m, i ,j;
	do{
	scanf("%d", &n);
	} while(n <= 0 || n >= 10);
	do{
	scanf("%d", &m);
	} while(m <= 0 || m >= 10);
	
	int M[n][m];
	
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++)
			scanf("%d", &M[i][j]);
	}
	
	for(i=1; i<=n; i++){
		printf("linha %d: ", i);
		for(j=1; j<=m; j++){
			printf("%d", M[i][j]);
			
			if(j != m)
				printf(",");
		}
		
		printf("\n");
	}
	
	return 0;
}






















