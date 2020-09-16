#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1103


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int h1, h2, m1, m2;

	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		if(!h1 && !m1 && !h2 && !m2) break;

		int mx = 0;
	    
	    do
	    {
	    	m1++, mx++;

	    	if(m1%60 == 0) h1++;

	    } while(m1%60 != m2 || h1%24 != h2);
	    
	    
	    cout << mx << endl;
	}

    return 0;
}

