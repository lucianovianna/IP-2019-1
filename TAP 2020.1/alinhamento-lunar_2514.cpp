#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2514


int main()
{
	int m;

	while(cin >> m)
	{
		int t1, t2, t3;
		int l1 = 0, l2 = 0, l3 = 0;

		cin >> t1 >> t2 >> t3;
		
		int tempo = 0;

		l1 += m, l2 += m, l3 += m;

		while(true)
		{
			if(l1 % t1 == 0  &&  l2 % t2 == 0  &&  l3 % t3 == 0) break;

			// printf("%d || %d || %d ||\n", l1%t1, l2%t2, l3%t3);
			l1++; l2++; l3++;
			tempo++;
		}

		cout << tempo << endl;
	}

    return 0;
}
