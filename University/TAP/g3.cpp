#include <bits/stdc++.h>
using namespace std;


int main()
{
	int a, b, c, n;
	cin >> a >> b >> c;
	int x, y, z;
	cin >> x >> y >> z;

	for (n = 1; n < 10000000; ++n)
	{
		int eq1, eq2, eq3;
		eq1 = (n%a);
		eq2 = (n%b);
		eq3 = (n%c);
		if(eq1 == x && eq2 == y && eq3 == z) break;
	}
	cout << n << endl;


	return 0;
}