#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1487


int n, dp[200][700];
vector<int> pontos(200);
vector<int> duracao(700);


long long int bestWay(int brinq, int tempoDisp)
{
	if(dp[brinq][tempoDisp] >= 0) {
		return dp[brinq][tempoDisp];
	}
	
	if(brinq == n+1 || !tempoDisp) {
		return dp[brinq][tempoDisp] = 0;
	}


	int naoEntra = bestWay(brinq+1, tempoDisp);

	if(duracao[brinq] <= tempoDisp)
	{
		int entra = pontos[brinq] + bestWay(brinq, tempoDisp-duracao[brinq]);

		return dp[brinq][tempoDisp] = max(naoEntra, entra);
	}

	return dp[brinq][tempoDisp] = naoEntra;

}


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int T;

    for(int H = 1; cin >> n, n; H++) 
    {
    	memset(dp, -1, sizeof dp);
	    pontos.clear();
	    duracao.clear();

	    cin >> T;

	    for (int i = 1; i <= n; ++i)
	    {
	    	cin >> duracao[i] >> pontos[i];
	    }

	    cout << "Instancia " << H << '\n' << bestWay(1, T) << "\n\n";
	}


    return 0;
}
