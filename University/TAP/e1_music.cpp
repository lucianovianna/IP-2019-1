#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n, m, c, count = 0;
	cin >> n >> m >> c;
	int v[n];

	for (int i = 0; i < n; ++i)
		scanf("%d", &v[i]);

	for (int i = 0; i <= (n-m); i++)
	{
		int menor = 1e7, maior = -1000;
		for (int j = i; j < (i+m); ++j)
		{
			if(v[j] > maior) maior = v[j];
			if(v[j] < menor) menor = v[j];
		}
		
		if(fabs(maior - menor) <= c) count++;
	}
 	
 	cout << count << endl;

	return 0;
}





