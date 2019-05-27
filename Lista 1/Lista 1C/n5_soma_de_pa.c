#include <stdio.h>
 
int main()
{
    int a1, r, x, i, total = 0;
	scanf("%d%d%d",&a1, &r, &x);

	for(i=0; i < x; i++){
		total = total + a1;
		a1 = a1 + r;
		//printf("%d\t",total);
	}
	
	printf("%d\n", total);
    return 0;
}
