#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1551


int main()
{
    // Desativa a sincronização dos fluxos padrões C e C++;
    ios_base::sync_with_stdio( false ); 
    // Esvazia o cout antes que o cin aceite uma entrada;
    cin.tie( NULL );

    int n;
    cin >> n;

	cin.ignore();

    for(int N = 0; N < n; N++)
    {
    	unordered_set<char> S;
    	string s;
    	
    	getline(cin, s);

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if( (int)s[i] >= 97  &&  (int)s[i] <= 122 )
    		{
    			S.insert(s[i]);
    		}
    	}

    	if(S.size() == 26) cout << "frase completa\n";
    	else if(S.size() >= 26/2) cout << "frase quase completa\n";
    	else cout << "frase mal elaborada\n";
    }


    return 0;
}
