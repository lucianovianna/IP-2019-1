#include <bits/stdc++.h>
using namespace std;


int triangle[60][60];
int t_aux[60][60];
int solve(int i, int j, int m)
{
	if(i == m) return triangle[i][j];

	if(!t_aux[i][j])
		t_aux[i][j] = triangle[i][j] + max(solve(i+1, j, m), solve(i+1, j+1, m));
	return t_aux[i][j];
}


int main()
{
	int m;
	cin >> m;

	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			int tmp;
			cin >> tmp;
			triangle[i][j] = tmp;
		}
	}

	// cout << "\n==== debugs ====\n";
	// for (int i = 1; i <= m; ++i)
	// {
	// 	for (int j = 1; j <= m; ++j)
	// 	{
	// 		cout << triangle[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << "\n==== debugs ====\n\n";


	cout << solve(1,1,m) << endl;


	return 0;
}