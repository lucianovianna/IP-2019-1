#include <stdio.h>

 
int main(){

	int n, i, j;
	scanf("%d", &n);
	int v[n];
	char token;
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	int m, tmp=0;
	scanf("%d", &m);
	
	for(i=0; i<m; i++){
		scanf("%d", &tmp);
		
		for(j = 0; j<n; j++){
			if(tmp == v[j]){
				printf("ACHEI\n");
				token = 'x';
				break;
			}
			else
				token = 'y';
		}
		if(token != 'x')
			printf("NAO ACHEI\n");
	}
	
	
	return 0;
}






















