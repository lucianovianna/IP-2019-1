#include <stdio.h>

void insertion(int n, int *v){
	
	int i, j, key;
	for(i=1; i<n; i++){
		key = v[i];
		j = i-1;
		while(j >= 0 && v[j] > key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}
	for(i=0; i<n; i++){
		printf("%d\n", v[i]);
	}
}


int main(){
	
	int n;
	scanf("%d", &n);
	int v[n];
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	insertion(n, v);	
	
	return 0;
}







