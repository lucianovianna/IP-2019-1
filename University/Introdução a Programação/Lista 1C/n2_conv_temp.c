#include <stdio.h>

int main()
{
    int i, c=0, j=0;
    scanf("%d", &i);
    double temp[i], conv;
    while(c < i)
    {
        c++;
        scanf("%lf", &temp[c]);
    }
        while(j < i)
        {
            j++;
            printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temp[j], (5.0*(temp[j] - 32.0)) / 9.0);
        }
    return 0;
}

