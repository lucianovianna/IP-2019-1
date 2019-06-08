#include <stdio.h>

int main(){
	int n, i, j, tmp, unicos=0;
	scanf("%d", &n);
	int v[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<n; i++){
		tmp=0;
		for(j=0; j<n; j++){
			if(v[i] == v[j])
				tmp++;
		}
		if(tmp == 1) unicos++;
	}
	
	printf("%d\n", unicos);
	
	return 0;
}






















