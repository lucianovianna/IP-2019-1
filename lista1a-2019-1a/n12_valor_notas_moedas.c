#include <stdio.h>
#include <math.h>

int main() 
{

	int Reais, X, Y, Z, W;
	scanf("%d", &Reais);
	X = Reais / 100;
	Y = (Reais - (X * 100)) / 50;
	Z = (((Reais - (X * 100))) - (Y * 50)) / 10;
	W = ((((Reais - (X * 100))) - (Y * 50)) - (Z * 10))  / 1;
	printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", X, Y, Z,  W); 	

}
