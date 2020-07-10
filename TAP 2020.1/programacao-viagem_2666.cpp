#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2731


typedef pair <int, int> pi;

const int INF = 0x3f3f3f3f;
vector <list <pi>> graph; 
vector <int> dist; 
vector <int> parent; 
vector <bool> visited; 
int n, m, d;


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


int main()
{
	while(true)
	{
		cin >> n >> m;

		if(!n && !m) break;

		dist.clear();
		parent.clear();
		visited.clear();
		graph.clear();
		//------------------
		dist.resize(n+1, INF);
		parent.resize(n+1, -1);
		visited.resize(n+1, false);
		graph.resize(n+1);

		for (int i = 0; i < m; i++)
		{
			int from , to , weight;

			cin >> from >> to >> weight;

			graph[from].push_back(make_pair(weight , to));
			graph[to].push_back(make_pair(weight , from));
		}
		cin >> d;

		dijkstra(1);

		if(dist[d] < 120) 
		{
			printf("Will not be late. Travel time - %d - best way - %d", dist[d], d);
		}
		else 
		{
			printf("It will be %d minutes late. Travel time - %d - best way - %d", dist[d] - 120, dist[d], d);
		}
		
		int j = parent[d];
		while (j != -1)
		{
			cout << " ";
			cout << j;
			j = parent[j];
		}
		cout << endl;
	}

	return 0;
}
