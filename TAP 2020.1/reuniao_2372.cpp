#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2372


typedef pair<int, int> pii;

#define MAXN 200
#define INFINITO 999999999

int n, m;                  
int distancia[MAXN];       
int processado[MAXN];     
vector<pii> vizinhos[MAXN];

void Dijkstra(int S){
	
	for(int i = 0; i <= n; i++) distancia[i] = INFINITO; 
	distancia[S] = 0;                                  
	
	priority_queue<pii, vector<pii>, greater<pii>> fila;
	fila.push( pii(distancia[S], S) );
	
	while(true)
	{
		int davez = -1;
		int menor = INFINITO;
		
		while(!fila.empty())
		{
			int atual = fila.top().second;
			fila.pop();
			
			if(!processado[atual]) {
				davez = atual;
				break;
			}
		}
		
		if(davez == -1) break; 

		processado[davez] = true; 

		for(int i = 0; i < (int)vizinhos[davez].size(); i++)
		{
			int dist  = vizinhos[davez][i].first;
			int atual = vizinhos[davez][i].second;
			
			if(distancia[atual] > distancia[davez] + dist) 
			{ 
				distancia[atual] = distancia[davez] + dist;    
				fila.push( pii(distancia[atual], atual) ); 
			}
		}
	}
	
}

int main()
{
	vector <int> maiores;

	cin >> n >> m;
	
	for(int i = 0; i < m; i++)
	{	
		int A, B, peso;
		cin >> A >> B >> peso;

		vizinhos[A].push_back( pii(peso, B) );
		vizinhos[B].push_back( pii(peso, A) );
	}

	for (int i = 0; i < n; ++i)
	{
		int maior = 0;

		for(int j = 0; j <= n; j++) processado[j] = false;
		Dijkstra(i);

		for (int k = 0; k < n; ++k)
		{
			if(distancia[k] > maior) {
				maior = distancia[k];
			}
		}
		// printf("maior: %d\n", maior);
		maiores.push_back(maior);
	}
	
	sort(maiores.begin(), maiores.end());

	cout << maiores[0] << endl;

	// printf("\n--------------------\n");
	// for (int i = 0; i < n; ++i)
	// {
	// 	for(int j = 0; j <= n; j++) processado[j] = false;

	// 	Dijkstra(i); // rodamos o Dijkstra

	// 	printf("S: %d\n", i);
	// 	for (int k = 0; k < n; ++k)
	// 	{
	// 		cout << distancia[k] << " ";
	// 	}
	// 	printf("\n-----------------\n");
	// } // debug
	
	return 0;
}


