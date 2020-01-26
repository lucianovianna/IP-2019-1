#include <stdio.h>
 
int main()
{
   	double result=0;
   	int n, i;
	scanf("%d",&n);

	for(i=1; i <= n; i++){
		result = result + (1.0/i);
	}
	
	printf("%.6lf\n", result);
    return 0;
}
