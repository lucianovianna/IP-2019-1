#include <bits/stdc++.h>

using namespace std;
 

int main()
{
	int n, y, d1=0, d2=0, d3=0, d4=0;
	cin >> n;

	while(d1 == d2 || d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4)
	{
		n++;
		d4 = n%10;
		d3 = (n/10) % 10;
		d2 = (n/100) % 10;
		d1 = (n/1000);
	}

 	cout << n << endl;

	return 0;
}

// codeforces.com/problemset/problem/271/A



