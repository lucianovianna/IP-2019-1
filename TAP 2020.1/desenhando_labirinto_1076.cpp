#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1076


vector<bool> visitado(200, false);
vector<int> lista[200];
int contador = 0;

void BFS(int x)
{
	queue<int> fila; 
	fila.push(x);

	visitado[x] = true;

	while(!fila.empty())
	{
		int v = fila.front();
		fila.pop();

		contador++;

		for (int i = 0; i < lista[v].size(); ++i)
		{
			int u = lista[v][i];

			if (!visitado[u])
			{
				contador++;

				visitado[u] = true; 
				fila.push(u); 
			}
		}
	}
}


int main()
{
	int T;
	cin >> T;

	while(T--) 
	{
		contador = 0;
		for (int i = 0; i < 200; ++i)
		{
			lista[i].clear();
			visitado[i] = false;
		}

		int n, v, a;
		cin >> n >> v >> a;

		for (int j = 0; j < a; ++j)
		{
			int l1, l2;
			cin >> l1 >> l2;

			lista[l1].push_back(l2);
			lista[l2].push_back(l1);
		}

		BFS(n);

		cout << contador - 1 << endl;
	}

	return 0;
}


