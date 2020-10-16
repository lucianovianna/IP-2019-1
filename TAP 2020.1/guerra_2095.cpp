#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2095


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int S;
    cin >> S;

    int quadradonia[S], noglonia[S];

    for (int i = 0; i < S; ++i)
    {
    	cin >> quadradonia[i];
    }
    for (int i = 0; i < S; ++i)
    {
    	cin >> noglonia[i];
    }

    sort(quadradonia, quadradonia + S);
    sort(noglonia, noglonia + S);

    int maxVitorias = 0, token = 0;

    for (int i = 0; i < S; ++i)
    {
        for (int j = token; j < S; ++j)
        {
            if(noglonia[i] > quadradonia[j]) 
            {
                // printf("%d > %d\n", noglonia[i], quadradonia[j]);
                maxVitorias++;
                token = j+1;
                break;
            }
            else 
            {
                // printf("%d <= %d\n", noglonia[i], quadradonia[j]);
                break;
            }
        }
    }

    cout << maxVitorias << endl;

    return 0;
}