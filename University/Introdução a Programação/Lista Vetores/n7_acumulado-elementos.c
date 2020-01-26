#include <stdio.h>


void menor_igual(int n, int *v){
	int tmp=0, i, j;
	for(i=0; i<n; i++){
		if(v[i] > tmp)
			tmp = v[i];
	}

	for(i=0; i<= tmp; i++){
		int count=0;
		for(j=0; j<n; j++){
			if(v[j] <= i)
				count++;
		}
		printf("(%d) %d\n", i, count);
	}
}


int main(){
	
	int n, i;
	do{
		scanf("%d", &n);
		int v[n];
		if(n == 0) break;
		
		for(i=0; i<n; i++){
			scanf("%d", &v[i]);
		}
		menor_igual(n, v);
	} while(n != 0);
	
	return 0;
}







