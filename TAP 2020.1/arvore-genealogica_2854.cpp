#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2854


vector<string> pessoa;

vector<int> graph[1000];
vector<bool> visitado(1000, false);

int acharPos(string s) 
{
    for (int i = 0; i < pessoa.size(); ++i) {
        if(pessoa[i] == s) {
            return i;
        }
    }

    pessoa.push_back(s);
    // cout << "debug: " << pessoa[pessoa.size()-1] << endl;
    return (int)(pessoa.size() - 1);
}

void dfs(int x)
{
    for (int i = 0; i < graph[x].size(); ++i)
    {
        int v = graph[x][i];

        if (!visitado[v])
        {
            visitado[v] = true; 
            dfs(v);
        }
    }
}


int main()
{
    int n, m, componentes = 0;

    cin >> m >> n;

    for (int i = 0; i < n; ++i)
    {
        string A, P, B;
        cin >> A >> P >> B;

        int a = acharPos(A), b = acharPos(B);

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < m; ++i)
    {
        if(!visitado[i]) 
        {
            visitado[i] = true;
            
            componentes++;
                         
            dfs(i);
        }
    }
    cout << componentes << endl;


    return 0;
}











