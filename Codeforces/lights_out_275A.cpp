#include <bits/stdc++.h>
using namespace std;
 

int m[6][6];


int main()
{
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			int tmp;
			cin >> tmp;

			m[i][j] += tmp;
			m[i+1][j] += tmp;
			m[i-1][j] += tmp;
			m[i][j+1] += tmp;
			m[i][j-1] += tmp;
		}
	}
	
	
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			if(m[i][j] % 2 == 0) m[i][j] = 1;
			else m[i][j] = 0;

			cout << m[i][j];
		}
		cout << endl;
	}

	return 0;
}

// codeforces.com/problemset/problem/275/A





