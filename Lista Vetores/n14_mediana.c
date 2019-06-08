#include <stdio.h>


int main(){
	
	int n, i, j, key, m;
	scanf("%d", &n);
	int v[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=1; i<n; i++){
		key = v[i];
		j = i-1;
		while(j>=0 && v[j] > key){
			v[j+1] = v[j];
			v[j] = key;
			key = v[j];
			j--;	
		}
	}

	if( n%2 != 0 ){
		m = v[(n-1)/2];
		printf("%.2lf\n", (double)m);
	}
	else{
		m = v[(n-1)/2]+ v[((n-1)/2)+1];
		printf("%.2lf\n", (double)m/2);
	}
	
	return 0;
}








