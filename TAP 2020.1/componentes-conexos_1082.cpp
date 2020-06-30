#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1082

vector<int> graph[100];
vector<bool> visitado(100, false);
vector<char> arrayComps(100);

void dfs(int x)
{
	for (int i = 0; i < graph[x].size(); ++i)
	{
		int v = graph[x][i];

		if (!visitado[v])
		{
			arrayComps.push_back((char) v + 96);

			visitado[v] = true; 
			dfs(v);
		}
	}
}


int main()
{
	int n;
	cin >> n;

	for (int k = 1; k <= n; ++k)
	{
		int v, e, componentes = 0;
		cin >> v >> e;

		for (int i = 0; i <= 100; ++i) {
			visitado[i] = false;
			graph[i].clear();
		}
		arrayComps.clear();

		for (int i = 0; i < e; ++i)
		{
			char A, B;
			cin >> A >> B;

			graph[(int)A - 96].push_back((int)B - 96);
			graph[(int)B - 96].push_back((int)A - 96);
		}

		printf("Case #%d:\n", k);
		for (int i = 1; i <= v; ++i)
		{
			if(!visitado[i]) 
			{
				visitado[i] = true;
				
				componentes++;
				
				arrayComps.push_back((char) i + 96);
				
				dfs(i);

				sort(arrayComps.begin(), arrayComps.end());
				for (int j = 0; j < arrayComps.size(); ++j) {
					printf("%c,", arrayComps[j]);
				}

				cout << endl;
				arrayComps.clear();
			}
		}
		printf("%d connected components\n\n", componentes);
	}


	return 0;
}
