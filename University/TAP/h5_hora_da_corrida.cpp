#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, p;
	cin >> n >> p;
	long long nn = n*p;
	
	for (int i = 10; i < 100; i+=10)
	{
		long long aux = nn*i;

		cout << (aux+99)/100;

		if(i < 90) cout << " ";
	}
	cout << endl;

	return 0;
}





