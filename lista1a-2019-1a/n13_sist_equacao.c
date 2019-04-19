#include <stdio.h>
#include <math.h>

int main() {

	float a, b, c, d, e, f, z, w;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	w = ( (f * a) - (d * c) ) / ( (a*e) - (d*b) );
	z = ( c - (b*w) ) / a;
	printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", truncf(z * 100)/100, truncf(w * 100) /100);
	return 0;

}


/*  

ax + by = c
dx + ey = f


*/
