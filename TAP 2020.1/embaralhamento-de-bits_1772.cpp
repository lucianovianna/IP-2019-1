#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1772

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ull n, k;
    while(cin >> n >> k, n, k)
    {
	    ull maior = n, menor = n;

	    while(k--)
	    {
	    	int a, b;
	    	cin >> a >> b;

	    	bool b1 = n & (1ll << a), b2 = n & (1ll << b);

	    	if(b1 != 0 && b2 == 0   ||   b1 == 0 && b2 != 0)
	    	{
	    		// cout << "Trocou bit: " << a << " com " << b << " ";
	    		n = n ^ (1ll << a);
	    		n = n ^ (1ll << b);
	    	}

	    	maior = max(maior, n);
	    	menor = min(menor, n);
	    } 

	    cout << n << " " << maior << " " << menor << endl;
	}    


    return 0;
}

