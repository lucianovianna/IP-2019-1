#include <stdio.h>


void insertion_sort(int arr[], int n){
	
	int i, key, j; 
	
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j + 1] = key;
    } 
}

int main()
{
	int n, i;
	int vetor[10000];

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &vetor[i]);
	}

	insertion_sort(vetor, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d\n", vetor[i]);
	}

	
	return 0;
}