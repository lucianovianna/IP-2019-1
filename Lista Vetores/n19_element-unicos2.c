#include <stdio.h>

int main(){
	int n, i, j, tmp, unicos=0;
	scanf("%d", &n);
	int v[n], v2[unicos];
	
	for(i=0; i<n; i++){
		scanf("%d", &v[n]);
	}
	
	for(i=0; i<n-1; i++){
		tmp=0;
		for(j=0; i<n; j++){
			if(v[i] == v[j+1]){
				tmp == 0;
				break;
			}
				else 
					tmp++;
		}
		if(tmp != 0){
			v[i] = v2[unicos];
			unicos++;
		}
	}

	
	/*v2[0] = v[0];
	for(i=1; i<n; i++){
		tmp = 0;
		for(j=0; j<unicos; j++){
			if(v[i] == v2[j]){
				tmp++;
				break;
			}
		}
		if(tmp == 0){
			v2[unicos] == v[i];	
			unicos++;
		}
	}*/
	printf("%d", unicos);
	/*
	for(i=0; i<unicos; i++){
		printf("%d\n", v2[i]);
	}
	*/
	return 0;
}





















	
