#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1293/problem/A


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, s, k;
		cin >> n >> s >> k;
		int isClosed[k];
		for (int y = 0; y < k; ++y)
		{
			cin >> isClosed[y];
		}
		
		int best1 = 99999999;
		for (int i = s; i <= n; ++i)
		{
			bool token = false;
			for (int j = 0; j < k; j++) 
				if(i == isClosed[j]) token = true;

			if(token) continue;

			// printf("DEBUG BEST1: i:%d, s:%d \n", i, s);
			best1 = fabs(i - s);
			break;
		}

		int best2 = 99999999;
		for (int i = s; i >= 1; i--)
		{
			bool token = false;
			for (int j = 0; j < k; j++) 
				if(i == isClosed[j]) token = true;

			if(token) continue;

			// printf("DEBUG BEST2: i:%d, s:%d \n", i, s);
			best2 = fabs(i - s);
			break;
		}
		
		cout << min(best1, best2) << endl;
	}
	
	return 0;
}