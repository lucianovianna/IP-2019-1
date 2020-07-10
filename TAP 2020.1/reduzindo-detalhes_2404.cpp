#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2404


typedef pair<int, int> pi;
typedef pair<int, pi> ppi;

vector <ppi> edges;
vector <ppi> mst;
int n, m;


struct disjointSets {
    vector <int> parent;
    vector <int> rank;

    disjointSets (int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);

        for (int i = 0; i <= n; i++) {
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

void kruskal() {
    sort(edges.begin(), edges.end());

    disjointSets ds(n);

    int c = 1;

    vector <ppi>::iterator it;

    for (it = edges.begin(); c < n; ++it) {
        int u = it -> second.first;
        int v = it -> second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        if(set_u != set_v) {
            mst.push_back(make_pair (it -> first , make_pair (u, v)));

            ds.merge(set_u, set_v);
            c++;
        }
    }
}

int main()
{
    long int minimo = 0;
    cin >> n >> m;

    edges.reserve(m);
    mst.reserve(n);

    for (int i = 0; i < m; ++i)
    {
        int from, to, weight;

        cin >> from >> to >> weight;

        edges.push_back(make_pair(weight , make_pair(from , to)));
    }

    kruskal();

    vector <ppi>:: iterator it;
    for (it = mst.begin (); it != mst.end (); it ++) 
    {
        int w = it -> first;
        // int u = it -> second.first;
        // int v = it -> second.second;

        // cout << u << " - " << v << " : " << w << endl;
        minimo += w;
    }
    cout << minimo << endl;

    return 0;
}
