#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1580


typedef long long ull;

vector<ull> cache(100100, 0);
unordered_map<char, ull> reps;
ull MOD = 1000000007;


ull fat(ull n) 
{
	if(n <= 1) return n;

    if (cache[n] == 0) {
        // cache[n] = ( n * fat(n-1) );
        cache[n] = ( n * fat(n-1) ) % MOD;
        // cache[n] = ( (n % MOD) * (fat(n-1) % MOD) ) % MOD;
    }

    return cache[n];
}


ull pow(ull x, ull y, ull m) 
{ 
    if (y == 0) return 1; 

    ull p = pow(x, y/2, m) % m; 

    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 


int main()
{
    // Desativa a sincronização dos fluxos padrões C e C++;
    ios_base::sync_with_stdio( false ); 
    // Esvazia o cout antes que o cin aceite uma entrada;
    cin.tie( NULL );

	string s;
    while(cin >> s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            reps[ s[i] ] += 1;
        }

        ull n = fat((ull)s.size());
        ull d = 1;

        for (auto itr = reps.begin(); itr != reps.end(); ++itr) 
        { 
            if(itr -> second > 1) 
            {
                // cout << '\t' << itr->first << '\t' << itr->second << '\n'; 
                d = ( d * fat(itr -> second) ) % MOD;
            }
        } 

        // cout << n << endl << d << endl;

        n = ( n * (pow(d, MOD-2, MOD)) ) % MOD;

        cout << n << endl;


        reps.clear();
    }
	
	return 0;
}

