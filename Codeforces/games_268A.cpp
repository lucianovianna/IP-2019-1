#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, result = 0;
	cin >> n;
	pair <int, int> t[n+2];


	for (int i = 0; i < n; ++i)
	{
		int h, g;
		cin >> h >> g;
		t[i] = make_pair(h, g);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(t[i].first == t[j].second) result++;
		}
	}

	cout << result << endl;
	

	return 0;
}

/*
https://codeforces.com/contest/268/problem/A
*/