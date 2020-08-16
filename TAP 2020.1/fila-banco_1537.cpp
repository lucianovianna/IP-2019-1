#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1537


typedef long long ull;

vector<ull> cache(101234, 0);
ull MOD = 1000000009;


ull fat(ull n) 
{
	if (cache[n] == 0) {
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

	cache[0] = cache[1] = 1; cache[2] = 2;

	ull n;

	while(cin >> n, n)
	{
		// cout << fat(n) << " || " << (fat(n) / fat(3)) << endl;

		cout << ( fat(n) * pow(fat(3), MOD-2, MOD) ) % MOD << endl;
	}


    return 0;
}