#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int nc, n;
    cin >> nc;

    for (int T = 0; T < nc; ++T)
    {
    	cin >> n;
	    vector<unsigned short int> alturas(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> alturas[i];
    	}
    	sort(alturas.begin(), alturas.end());

    	for (int i = 0; i < n; ++i)
    	{
    		cout << alturas[i];
    		if(i < n-1) cout << " ";
    	} cout << "\n";

    	alturas.clear();
    }

    return 0;
}