#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1140


bool foo(string s)
{
	stringstream ss(s);

    char firstChar = s[0];

	while(getline(ss, s, ' '))
	{
		if(s[0] != firstChar && fabs((int)s[0]-firstChar) != 32) 
		{
			return false;
		}
	}

	return true;
}


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    string str;

    while(true)
    {
    	getline(cin, str);

    	if(str == "*") break;

    	(foo(str)) ? cout << "Y\n"  :  cout << "N\n";
    }

    return 0;
}
