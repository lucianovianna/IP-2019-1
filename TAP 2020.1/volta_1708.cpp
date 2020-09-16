#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1708


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int x, y;

    cin >> x >> y;

    for (int i = 1; true; ++i)
    {
    	// cout << x*i << "   " << y*i << endl;
    	if( y*i - x*i >= y ) 
    	{
    		cout << i << endl;
    		return 0;
    	}
    }

    return 0;
}