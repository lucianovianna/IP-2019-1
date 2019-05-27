#include <stdio.h>
#include <math.h>

int main()
{
	float h, a, ab, v, z = sqrt(3.00);
	scanf("%f%f", &h, &a);	
	ab = ( 3.0 * (a * a) * z ) / 2.0;
	v = (1.0 / 3.0) * ab * h; 	
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", truncf(v * 100) / 100);
	return 0;
}

