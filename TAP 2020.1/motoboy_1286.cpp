#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1286


int n, dp[200][200];
vector<int> numPizzas(200);
vector<int> tempo(200);


int bestWay(int pizza, int maxPizzas)
{
	if(dp[pizza][maxPizzas] >= 0) {
		return dp[pizza][maxPizzas];
	}
	
	if(pizza == n+1 || !maxPizzas) {
		return dp[pizza][maxPizzas] = 0;
	}


	int naoEntrega = bestWay(pizza+1, maxPizzas);

	if(numPizzas[pizza] <= maxPizzas)
	{
		int entrega = tempo[pizza] + bestWay(pizza+1, maxPizzas-numPizzas[pizza]);

		return dp[pizza][maxPizzas] = max(naoEntrega, entrega);
	}

	return dp[pizza][maxPizzas] = naoEntrega;

}

int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    while(cin >> n, n)
    {
	    memset(dp, -1, sizeof dp);
	    tempo.clear();
	    numPizzas.clear();

	    int P;
	    cin >> P; 

	    for (int i = 1; i <= n; ++i)
	    {
	    	cin >> tempo[i] >> numPizzas[i];
	    }

	    cout << bestWay(1, P) << " min." << endl;
	}

    return 0;
}