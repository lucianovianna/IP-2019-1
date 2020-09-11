#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2289


typedef unsigned long long int ull;


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    ull x, y;
    while (cin >> x >> y)
    {
    	if(!x && !y) break;

    	/*for (int i = 63; i >= 0 ; --i)
    	{
    		cout << ((x & (1LL << i)) ? '1' : '0' );	
    	}
    	cout << endl;
    	for (int j = 63; j >= 0 ; --j)
    	{
    		cout << ((y & (1LL << j)) ? '1' : '0' );	
    	} cout << endl; // debug*/

    	cout << __builtin_popcountll(x ^ y) << endl;
	}

    return 0;
}
