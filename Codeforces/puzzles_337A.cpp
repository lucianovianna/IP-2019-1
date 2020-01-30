#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;
	int jigs[m+2];

	for (int i = 0; i < m; ++i)
	{
		cin >> jigs[i];
	}
	sort(jigs, jigs+m);

	int menor = 99999999;
	for (int i = 0; i <= m - n; ++i)
	{
		// printf("%d - %d = %d\n", jigs[i+n-1], jigs[i], jigs[i+n-1] - jigs[i]);
		menor = min(menor, (jigs[i+n-1] - jigs[i]));
	}
	
	cout << menor << endl;
	

	return 0;
}

// https://codeforces.com/problemset/problem/337/A
