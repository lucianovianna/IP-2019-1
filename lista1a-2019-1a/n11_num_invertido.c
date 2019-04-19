
#include <stdio.h>
#include <math.h>

int main() 
{
	int n, y1, y2, y3;
	scanf("%d", &n);
	y3 = n % 10;
	y2 = (n / 10) % 10;
	y1 = n / 100;
	printf("%d\n", (y3 * 100) + (y2*10) + y1);
	

}









