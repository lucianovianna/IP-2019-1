#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1310


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int n;

    while(cin >> n)
    {
        vector<int> ganhoDia(200, 0);
    	int custoPorDia, lucro = 0;

    	cin >> custoPorDia;

    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> ganhoDia[i];
    	}

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n-i+1; j++)
            {
                int ganhoSeq = 0;

                for (int k = j; k <= i+j-1; ++k)
                {
                    ganhoSeq += ganhoDia[k];
                }
                
                lucro = max(lucro, ganhoSeq - (custoPorDia*i));
            }
        }

        cout << lucro << endl;

    }

    return 0;
}
