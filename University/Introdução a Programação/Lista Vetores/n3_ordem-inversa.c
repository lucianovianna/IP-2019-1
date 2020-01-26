#include <stdio.h>


int main(){

	int n, i, j;
	scanf("%d", &n);
	int v[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	for(j = n-1; j>=0 ; j--){
		printf("%d ", v[j]);
	}
	
	printf("\n");
	
	return 0;
}






















