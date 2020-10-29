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
	float res;

	scanf("%d", &n);

	int vetor[n+10];

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &vetor[i]);
	}

	insertion_sort(vetor, n);

	if( (n % 2) == 0)
	{
		res = (vetor[(n/2)-1] + vetor[(n/2)]) / 2.0;
	}
	else
	{
		res = (float)vetor[(n/2)];
	}

	printf("%.2f\n", res);


	return 0;
}