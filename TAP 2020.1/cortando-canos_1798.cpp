#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1798


int n, valor[1123], comprimento[1123], dp[1123][2123];

int bestWay(int cano, int tamanhoCano)
{
	if(dp[cano][tamanhoCano] >= 0) {
		return dp[cano][tamanhoCano];
	}
	
	if(cano == n+1 || !tamanhoCano) {
		return dp[cano][tamanhoCano] = 0;
	}


	int naoCorta = bestWay(cano+1, tamanhoCano);

	if(comprimento[cano] <= tamanhoCano)
	{
		int corta = valor[cano] + bestWay(cano, tamanhoCano-comprimento[cano]);

		return dp[cano][tamanhoCano] = max(naoCorta, corta);
	}

	return dp[cano][tamanhoCano] = naoCorta;

}

int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    memset(dp, -1, sizeof dp); // IMPORTANTE

    int T;

    cin >> n >> T; 

    for (int i = 1; i <= n; ++i)
    {
    	cin >> comprimento[i] >> valor[i];
    }

    cout << bestWay(1, T) << endl;

    return 0;
}