#include <stdio.h>

int main() {
	
	double A[2][2], n,m;
	int i,j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%lf", &A[i][j]);
			
		}	
	}	
	printf("%.2lf\n", A[0][0]*A[1][1] - A[0][1]*A[1][0]);
	
	
	return 0;
}
