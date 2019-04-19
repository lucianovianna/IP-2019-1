#include <stdio.h>
#include <math.h>

int main()
{
    float r, a, valor, ac, al;
    scanf("%f%f", &r, &a);
    //ac = 3.14159 * (r * r);
    //al = 2 * 3.14159 * r * a
    //valor = (2 * ac + al) * 100
    valor = (2 * (3.14159 * powf(r, 2)) + (2 * 3.14159 * a * r)) * 100;
    printf("O VALOR DO CUSTO E = %.2f", truncf(valor * 100) / 100);

    return 0;
}

