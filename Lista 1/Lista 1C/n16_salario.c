#include <stdio.h>

int main()
{
	int a;
	double b, c, f;
	do{
	scanf("%d %lf %lf", &a, &b, &c);
	getchar();
	if(a == 0){
		break;}
	printf("%d %.2lf\n", a, (b * c) );
	}while(a != 0);
	
	
	return 0;
}
