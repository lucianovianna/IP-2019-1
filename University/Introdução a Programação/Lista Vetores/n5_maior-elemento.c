#include <stdio.h>

void maior (int n, int *v){
	
	int tmp=0, tmp2, i;
	
	for(i=0; i<n; i++){
		if(v[i] > tmp){
			tmp = v[i];
			tmp2 = i;
		}
	}
	printf("%d %d\n", tmp2, tmp);
}

int main(){

	int n, i;
	while(n != 0) {
		scanf("%d", &n);
		if(n == 0) break;
		
		int v[n];
		for(i=0; i<n; i++){
			scanf("%d", &v[i]);
		}
		
		maior(n, v);
	}
	return 0;
}










