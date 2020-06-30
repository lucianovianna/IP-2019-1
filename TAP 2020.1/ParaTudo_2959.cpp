#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2959


bool visitado[1000];
vector<int> lista[1000];

bool BFS(int x, int target)
{
	queue<int> fila;
	fila.push(x);

	visitado[x] = true;

	while(!fila.empty())
	{
		int v = fila.front();
		fila.pop();

		for (int i = 0; i < lista[v].size(); ++i)
		{
			int u = lista[v][i];

			if(u == target) return true;

			if (!visitado[u])
			{
				visitado[u] = true; 
				fila.push(u); 
			}
		}
	}

	return false;
}

// bool DFS (int x, int target) 
// {
// 	if(x == target) return true;
// 	if(!visitado[x]) visitado[x] = true;

// 	for(int i = 0; i < lista[x].size(); i++){
		
// 		int v = lista[x][i];
// 		printf("aresta(x): %d | visitado(v): %d | v: %d | target: %d | lista[x].size(): %d \n", x, visitado[v], v, target, lista[x].size());
		
// 		if(v == target) return true;
		
// 		if(!visitado[v]){ 
// 			visitado[v] = true;
// 			DFS(v, target);
// 		}
// 	}

// 	return false;
// } // wrong...


int main()
{
	int n, m, p;
	cin >> n >> m >> p;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;

		lista[a].push_back(b);
		lista[b].push_back(a);
	}

	for (int i = 0; i < p; ++i)
	{
		int A, B;
		cin >> A >> B;

		for(int j = 0; j <= 1000; j++) visitado[j] = false;

		BFS(A, B) ? printf("Lets que lets\n") : printf("Deu ruim\n");
	}


	return 0;
}
