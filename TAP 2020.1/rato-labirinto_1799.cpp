#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1799


typedef pair <int, int> pi;

const int INF = 0x3f3f3f3f;
vector <list <pi>> graph;
vector <int> dist;
vector <int> parent;
vector <bool> visited;
vector<string> palavra;
int n, m;


void dijkstra(int source)
{
	priority_queue <pi, vector<pi>, greater<pi>> pq;
	pq.push(make_pair(0, source));

	dist[source] = 0;

	list<pi>:: iterator it;

	while (!pq.empty())
	{
		int weight = pq.top().first;
		int v = pq.top().second;

		pq.pop();

		if (visited[v]) continue;

		visited[v] = true;

		for (it = graph[v].begin(); it != graph[v].end(); ++it)
		{
			if (dist[it -> second] > weight + it -> first)
			{
				parent[it -> second] = v;
				dist[it -> second] = weight + it -> first;
				pq.push(make_pair(dist[it -> second], it -> second));
			}
		}
	}
}

int acharPos(string s) 
{
	if(s == "Entrada" || s == "Saida") return -1;
	if(s == "*") return n-1;

    for (int i = 0; i < palavra.size(); ++i) {
        if(palavra[i] == s) {
            return i;
        }
    }

    palavra.push_back(s);
    // cout << "debug: " << palavra[palavra.size()-1] << endl;
    return (int)(palavra.size() - 1);
}

int main()
{
	int in, out, queijo, pontosMin = 0;
	cin >> n >> m;

	dist.resize(n, INF);
	parent.resize(n, -1);
	visited.resize(n, false);
	graph.resize(n);


	for (int i = 0; i < m; i++)
	{
		string A, B;
		cin >> A >> B;

		int from = acharPos(A), to = acharPos(B), weight = 1;
	
		if(A == "Entrada") { in = to; continue; }  
		if(B == "Entrada") { in = from; continue; }
		if(A == "Saida") { out = to; continue; }
		if(B == "Saida") { out = from; continue; }

		graph[from].push_back(make_pair(weight , to));
		graph[to].push_back(make_pair(weight , from));
	}

	dijkstra(acharPos("*"));
	
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << '(' << setw(2) << dist[i] << ") : " << i;

	// 	int j = parent[i];
	// 	while (j != -1)
	// 	{
	// 		cout << " -> " << j;
	// 		j = parent[j];
	// 	}
	// 	cout << endl;
	// }
	pontosMin += dist[in] + 1;
	pontosMin += dist[out] + 1;
	// printf("in: %d, out: %d\n", in, out);
	cout << pontosMin << endl;

	return 0;
}
