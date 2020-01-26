#include <bits/stdc++.h>
using namespace std;


int cage[35][35];


int main()
{
	int r, c;
	cin >> r >> c;
	cage[1][1] = 1;
	
	int k;
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		int t1, t2;
		cin >> t1 >> t2;
		cage[t1][t2] = -1;
	}


	// for (int i = 1; i <= r; ++i)
	// {
	// 	if(cage[i][0]) 
	// 		cage[i+1][0] += cage[i][0];
	// }
	// for (int j = 1; j <= c; ++j)
	// {
	// 	if(cage[0][j]) 
	// 		cage[0][j+1] += cage[0][j];
	// }


	for (int i = 1; i <= r; ++i)
	{
		for (int j = 1; j <= c; ++j)
		{
			// if(cage[i][j] && cage[i][j+1] != -1) 
			// {
			// 	cage[i][j+1] += cage[i][j];
			// }
			// if(cage[i][j] && cage[i+1][j] != -1) 
			// {
			// 	cage[i+1][j] += cage[i][j];
			// }
			if (cage[i][j] != -1 && cage[i-1][j] > 0)
			{
				cage[i][j] += cage[i-1][j];
			}
			if (cage[i][j] != -1 && cage[i][j-1] > 0)
			{
				cage[i][j] += cage[i][j-1];
			}
		}
	}

	// for (int i = 1; i <= r; ++i)
	// {
	// 	for (int j = 1; j <= c; ++j)
	// 	{
	// 		cout << cage[i][j] << " ";//<< "i:" << i << "j:" << j << " ";
	// 	}
	// 	cout << endl;
	// }

	cout << cage[r][c] << endl;
	
	return 0;
}

/*
cage[i][j+1]
cage[i+1][j]

*/