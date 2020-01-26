#include <stdio.h>
#include <math.h>

int main()
{
    float a, b ,c, y;
    scanf("%f%f%f", &a, &b, &c);
    y = (powf(b, 2)) - (4 * a * c);

    printf("O VALOR DE DELTA E = %.2f\n", truncf(y * 100 ) / 100);
    return 0;
}

