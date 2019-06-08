#include <stdio.h>

void imprimavetor(int n, int *v){
	int i;
	for(i=0; i<n; i++){
		printf("%d", v[i]);
		if(i<n-1) printf(" ");
	}
	printf("\n");
}

int main(){

	int n, i, j=0, tmp=0;
	scanf("%d", &n);
	int v[n], w[n];
	
	for(i=0; i<n; i++){	
		scanf("%d", &v[i]);
	}
		for(i=n-1; i>=0; i--){	
			w[j] = v[i];
			j++;
		}
	
	imprimavetor(n, v);
	imprimavetor(n, w);
	
	for(i=0; i<n; i++){
		if(v[i] > tmp){
			tmp = v[i];
		}
	}
	printf("%d\n", tmp);
	
	tmp=1001;
	for(i=0; i<n; i++){
		if(v[i] < tmp){
			tmp = v[i];
		}
	}
	printf("%d\n", tmp);

	
	return 0;
}










