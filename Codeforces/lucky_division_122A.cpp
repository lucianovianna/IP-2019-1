#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/122/A


int main()
{
	int n;
	cin >> n;
	
	int lucky[12] = {4,7,47,74,44,444,447,474,477,777,774,744};

	for (int i = 0; i < 12; ++i)
	{
		if(n % lucky[i] == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}


