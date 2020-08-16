#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1110


int main()
{
    // // Desativa a sincronização dos fluxos padrões C e C++;
    ios_base::sync_with_stdio( false ); 
    // // Esvazia o cout antes que o cin aceite uma entrada;
    cin.tie( NULL );

    int n;
    while(cin >> n, n)
    {
    	deque<int> pilha;

    	for (int i = 1; i <= n; i++) pilha.push_back(i);

    	cout << "Discarded cards: ";
    	while(pilha.size() != 1)
    	{
    		cout << pilha.front();
    		if(pilha.size() > 2) cout << ", ";

    		pilha.pop_front();
    		pilha.push_back(pilha.front());
    		pilha.pop_front();
    	}


    	cout << endl << "Remaining card: " << pilha.front() << endl;
    	pilha.clear();
    }


    return 0;
}