#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x, m;
    cin >> x >> m;

    for (int i = 0; i <= m; ++i)
    {
    	int tmp = x * i;
    	if( (tmp % m) == 1)
    	{
    		cout << i << endl;
    		return 0;
    	} 
    }

    cout << "Nao existe este tipo de inteiro." << endl;



    return 0;
}


