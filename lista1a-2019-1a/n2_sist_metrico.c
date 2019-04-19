#include <stdio.h>
#include <math.h>

int main()
{
    float t_f, chuva, x, y;
    scanf("%f%f", &t_f, &chuva);
    y = chuva * 25.4;
    x = (5 * (t_f - 32)) / 9;
    printf("O VALOR EM CELSIUS = %.2f\n", truncf(x * 100)/100);
    printf("A QUANTIDADE DE CHUVA E = %.2f", truncf(y * 100)/100);
    return 0;
}

