#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2380


struct disjointSets {
	vector <int> parent;
	vector <int> rank;

	disjointSets (int l) {
		parent.resize(l+1);
		rank.resize(l+1, 0);

		for (int i = 0; i <= l; i++) {
			parent[i] = i;
		}
	}

	int find(int u) {
		if (u != parent[u]) {
			parent[u] = find(parent[u]);
		}

		return parent[u];
	}

	void merge(int x, int y) {
		x = find(x), y = find(y);

		if (rank[x] > rank[y]) parent[y] = x;
		else parent[x] = y;

		if (rank[x] == rank[y]) rank[y]++;
	}
};


int main()
{
	int n, k;
	char token;
	
	cin >> n >> k;

	disjointSets ds(n+1);

	while(k--)
	{
		int a, b;
		cin >> token >> a >> b;

		int set_a = ds.find(a);
		int set_b = ds.find(b);

		if(token == 'F')
		{
			ds.merge(set_a, set_b);
		}
		else if(token == 'C')
		{
			(set_a == set_b) ? cout << "S\n" : cout << "N\n";
		}
	}


	return 0;
}