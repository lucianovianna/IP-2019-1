#include <stdio.h>

int main(){
	int n, k, i, faltosos=0;
	scanf("%d%d", &n, &k);
	int v[n], v2[n];
	
	for(i=1; i<=n; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=1; i<=n; i++){
		if(v[i] <= 0){
			v2[faltosos] = i;
			faltosos++;
		}
	}
	
	if(faltosos < k) printf("SIM\n");
		else{
			printf("NAO\n");
			for(i=faltosos-1; i>=0; i--){
				printf("%d\n", v2[i]);
			}
		}	
	
	return 0;
}






















