#include <stdio.h>


int main(){

	int n;
	scanf("%d", &n);
	int v[n], key=0;
	
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);
		key += v[i];
	}
	
	printf("%d\n", key);
	
	
	
	return 0;
}










