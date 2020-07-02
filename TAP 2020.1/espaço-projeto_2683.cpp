#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2683


struct t_aresta {
    int dis;
    int x, y;
};

bool comp(t_aresta a, t_aresta b) { 
    return a.dis < b.dis; 
}
bool comp2(t_aresta a, t_aresta b) { 
    return a.dis > b.dis; 
}

#define MAXN 2010100

int n;
int pai[MAXN];
int peso[MAXN];

t_aresta aresta[MAXN];
t_aresta aresta2[MAXN];
t_aresta mst[MAXN];
t_aresta hst[MAXN];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b) 
{
    a = find(a);
    b = find(b);

    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else {
        pai[a] = b;
        peso[b]++;
    }
}


int main()
{
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        aresta[i].x = a, aresta[i].y = b, aresta[i].dis = c;
        aresta2[i].x = a, aresta2[i].y = b, aresta2[i].dis = c;
    }

    for(int i = 0; i <= n; i++) pai[i] = i;


    sort(aresta + 1, aresta + n + 1, comp);
    sort(aresta2 + 1, aresta2 + n + 1, comp2);
    
    int size = 0;
    for(int i = 1; i <= n; i++) {
        if( find(aresta[i].x) != find(aresta[i].y) ) {
            join(aresta[i].x, aresta[i].y);
            mst[++size] = aresta[i];
        }
    }


    for(int i = 0; i <= n; i++) pai[i] = i, peso[i] = 0;

    int size2 = 0;
    for(int i = 1; i <= n; i++) {
        if( find(aresta2[i].x) != find(aresta2[i].y) ) {
            join(aresta2[i].x, aresta2[i].y);
            hst[++size2] = aresta2[i];
        }
    }

    int custoMaior = 0, custoMenor = 0;

    // cout << endl;
    for(int i = 1; i <= size; i++) {
        // cout << mst[i].x << " " << mst[i].y << " " << mst[i].dis << "\n";
        custoMenor += mst[i].dis;
    }
    // cout << endl;
    for(int i = 1; i <= size2; i++) {
        // cout << hst[i].x << " " << hst[i].y << " " << hst[i].dis << "\n";
        custoMaior += hst[i].dis;
    }
    cout << custoMaior << endl << custoMenor << endl;
    
    return 0;
}


