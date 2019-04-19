#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float a, b, c;
	scanf("%d%f%f%f",&i, &a, &b, &c);
	switch(i) {
		case 1: 
			if (a > b && a > c && b > c)
				printf("%.2f %.2f %.2f\n", a, b, c);
			else if (a > b && a > c && b < c)
				printf("%.2f %.2f %.2f\n", a, c, b);
			else if (b > a && b > c && c > a)
				printf("%.2f %.2f %.2f\n", b, a, c);
			else if (b > a && b > c && c < a)
				printf("%.2f %.2f %.2f\n", b, c, a);
			else if (c > b && c > a && b < a)
				printf("%.2f %.2f %.2f\n", c, a, b);
			else if (c > b && c > a && b > a)
				printf("%.2f %.2f %.2f\n", c, b, a);
			else
				printf("%.2f %.2f %.2f\n", c, b, a);
			break;
		case 2: 
			if (a < b && a < c && b < c)	//(a < b < c)
				printf("%.2f %.2f %.2f\n", c, b, a);
			else if (a < b && a < c && b > c) //(a < c < b)
				printf("%.2f %.2f %.2f\n", b, c, a);
			else if (b < a && b < c && a < c) //(b < a < c)
				printf("%.2f %.2f %.2f\n", c, a, b);
			else if (b < c && b < a && c < a) //(b < c < a)
				printf("%.2f %.2f %.2f\n", a, c, b);
			else if (c < a && c < b && a < b) //(c < a < b)
				printf("%.2f %.2f %.2f\n", b, a, c);
			else if (c < b && c < a && b < a) //(c < b < a)
				printf("%.2f %.2f %.2f\n", a, b, c);
			else
				printf("%.2f %.2f %.2f\n", c, b, a);
			break;
		case 3:
			if (a > b && a > c && b > c)
				printf("%.2f %.2f %.2f\n", b, a, c);
			else if (a > b && a > c && b < c)
				printf("%.2f %.2f %.2f\n", c, a, b);
			else if (b > a && b > c && c > a)
				printf("%.2f %.2f %.2f\n", a, b, c);
			else if (b > a && b > c && c < a)
				printf("%.2f %.2f %.2f\n", c, b, a);
			else if (c > b && c > a && b < a)
				printf("%.2f %.2f %.2f\n", a, c, b);
			else if (c > b && c > a && b > a)
				printf("%.2f %.2f %.2f\n", b, c, a);
			else
				printf("%.2f %.2f %.2f\n", c, b, a);
			break;
	}
	return 0;
}

/*
a > b > c	; 	dado a, b ,c o maior deve ficar no meio
a > c > b	;	logo: 
b > a > c
b > c > a 
c > a > b
c > b > a
*/




