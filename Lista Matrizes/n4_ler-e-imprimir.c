#include <stdio.h>


int main(){

	int n, m, i ,j;
	do{
	scanf("%d", &m);
	} while(m <= 0 || m > 10);
	do{
	scanf("%d", &n);
	} while(n <= 0 || n > 10);
	
	int M[m][n];
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
			scanf("%d", &M[i][j]);
	}
	
	for(i=0; i<m; i++){
		printf("linha %d: ", i+1);
		for(j=0; j<n; j++){
			printf("%d", M[i][j]);
			
			if(j != n-1)
				printf(",");
		}
		printf("\n");
	}
	
	return 0;
}






















