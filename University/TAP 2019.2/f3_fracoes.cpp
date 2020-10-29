#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, d;
	cin >> n >> d;
	char t = 'n';

	if((n%d) == 0)
	{
		cout << n/d << endl;
		return 0;
	}
	else if(n > d)
	{
		int inteiro = n/d;
		n = n%d;
		cout << inteiro << " ";
	}


	for (int i = 2; i <= n; ++i)
	{
		if(n%i == 0 && d%i == 0)
		{
			n = n/i; d = d/i;
		}
		else continue;
		if(n==1) break;
	}
	cout << n << '/' << d << endl;


	return 0;
}