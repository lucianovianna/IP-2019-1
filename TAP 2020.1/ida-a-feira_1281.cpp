#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		int m, p;
		float res = 0.00;

		vector< pair<string, float> > aVenda;

		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			string venda; 
			float preco;

			cin >> venda >> preco;
			aVenda.push_back(make_pair(venda, preco));
		}

		cin >> p;
		for (int i = 0; i < p; ++i)
		{
			string compra;
			float qntd;
			cin >> compra >> qntd;

			for (int j = 0; j < aVenda.size(); ++j)
			{
				if(aVenda[j].first == compra) {
					res += aVenda[j].second * qntd;
					break;
				}
			}
		}

		printf("R$ %.2f\n", res);
	}


	return 0;
}

