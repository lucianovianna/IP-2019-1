#include <stdio.h>


int main(){

	int n, k, i, j;
	do {
		scanf("%d", &n);
	} 	while(n <= 0);
	
	int v[n], key=0;
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	scanf("%d", &k);
		
	for(j = 0; j<n ; j++){
		if(v[j] >= k)
			key++;
	}
	
	printf("%d\n", key);
	
	return 0;
}






















