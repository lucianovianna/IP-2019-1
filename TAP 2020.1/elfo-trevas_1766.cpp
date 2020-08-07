#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1766

struct Renas {
	string nome;
	int peso, idade;
	float altura;
} Rena[10000];


bool ordem(Renas a, Renas b)
{
	if(a.peso == b.peso) {
		if(a.idade == b.idade) {
			if(a.altura == b.altura) {
				return a.nome < b.nome;
			}

			return a.altura < b.altura;
		}

		return a.idade < b.idade;
	}
	else {
		return a.peso > b.peso;
	}
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
    	int n, m;
    	cin >> n >> m;

    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> Rena[i].nome >> Rena[i].peso 
    		>> Rena[i].idade >> Rena[i].altura;
    	}

    	sort(Rena+1, Rena+n+1, ordem);

		printf("CENARIO {%d}\n", t);
    	for (int i = 1; i <= m; ++i)
    	{
    		cout << i << " - " << Rena[i].nome << endl;
    	}
    }

    return 0;
}

