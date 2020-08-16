#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2091


int main()
{
    // Desativa a sincronização dos fluxos padrões C e C++;
    ios_base::sync_with_stdio( false ); 
    // Esvazia o cout antes que o cin aceite uma entrada;
    cin.tie( NULL );

	int n;

    unordered_map<long long, bool> odd;

    long long x, solitary;

    while(cin >> n, n)
    {
       	for (int i = 0; i < n; ++i)
        {
            cin >> x;

            odd[x] = ( odd.find(x) == odd.end() ) ? true : !odd[x];

            if(odd[x]) solitary = x;
        }

        cout << solitary << endl;
    }


    return 0;
}