#include <bits/stdc++.h>
using namespace std;
// https://vjudge.net/problem/UVA-10986/origin

typedef pair <int, int> pi;

const int INF = 0x3f3f3f3f;
vector <list <pi>> graph; 
vector <int> dist;
vector <int> parent;
vector <bool> visited;
int n, m, S, T;


void dijkstra(int source)
{
	// Min heap where: first = weight , second = vertex
	priority_queue <pi, vector<pi>, greater<pi>> pq;
	pq.push(make_pair(0, source));

	dist[source] = 0; // Distance from source to itself is 0

	list<pi>:: iterator it;

	while (!pq.empty())
	{
		int weight = pq.top().first;
		int v = pq.top().second;

		pq.pop();

		if (visited[v]) continue; // Vertex already processed

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


int main()
{
	int casos;
	cin >> casos;

	for (int I = 1; I <= casos; ++I)
	{
		cin >> n >> m >> S >> T;

		dist.clear();
		parent.clear();
		visited.clear();
		graph.clear();
		//  ----------------
		dist.resize(n, INF);
		parent.resize(n, -1);
		visited.resize(n, false);
		graph.resize(n);

		for (int i = 0; i < m; i++)
		{
			int from , to , weight;

			cin >> from >> to >> weight;

			graph[from].push_back(make_pair(weight , to));
			graph[to].push_back(make_pair(weight , from));
		}

		dijkstra(S);
		
		if(dist[T] == INF) {
			printf("Case #%d: unreachable\n", I);
		}
		else {
			printf("Case #%d: %d\n", I, dist[T]);	
		}
		
	}

	return 0;
}
