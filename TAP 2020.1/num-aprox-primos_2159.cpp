#include <bits/stdc++.h>
using namespace std;


int main()
{
    double n;
    cin >> n;

    double minimo = n / (log(n));
    double maximo = 1.25506 * (minimo);

    printf("%.01f %.01f\n", minimo, maximo);

    return 0;
}