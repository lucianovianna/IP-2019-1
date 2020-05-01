#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/510/A

int main()
{
    int n, m, i, j;
    cin >> n >> m;

    char token = 'F';
    char s[n+5][m+5];

    for (i = 1; i <= n; ++i)
    {
    	for (j = 1; j <= m; ++j)
    	{
    		if(i % 2 == 0) {
    			s[i][j] = '.';
    		}
    		else { 
    			s[i][j] = '#';
    		}
    	}

    	if(i % 2 == 0 && token == 'F') {
			s[i][m] = '#';
			token = 'O';
		} 
		else if(i % 2 == 0 && token == 'O') {
			s[i][1] = '#';
			token = 'F';
		}
    }

    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		cout << s[i][j];
    	}
    	cout << endl;
    }

    return 0;
}