#include <stdio.h>
//#include <math.h>

int main()
{
	int n1, n2, n3; 
	char X, y, z;
	scanf("%d %d %d\n", &n1, &n2, &n3);
	X = getchar();
	y = getchar();
	z = getchar();
	
	X = n1;
	y = n2;
	z = n3;
	//printf("\n\n%d  %d   %d\n\n", X, y, z);
	printf("%d%d%d", X,y,z);
	/*if(X < y && y < z)
		printf("%d %d %d\n", X, y, z);
	else if(X < z && z < y)
		printf("%d %d %d\n", X, z, y);
	else if(y < X && X < z)
		printf("%d %d %d\n", y, X, z);
	else if(y < z && z < X)
		printf("%d %d %d\n", y, z, X);
	else if(z < X && X < y)
		printf("%d %d %d\n", z, X, y);
	else if(z < y && y < X)
		printf("%d %d %d\n", z, y, X);*/
	
	return 0;
}
// a b c // a c b // b a c // b c a // c a b // c b a//

/*
nx = a || b || c;
      a < b < c;

n1 < n2 < n3
n1 < n3 < n2
n2 < n1 < n3
n2 < n3 < n1
n3 < n1 < n2
n3 < n2 < n1
*/
