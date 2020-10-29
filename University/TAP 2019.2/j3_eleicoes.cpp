#include <bits/stdc++.h>
using namespace std;


int main()
{
	int a,b;
	cin >> a >> b;

	int t=0, ac=0, pc=0, pf=0;
	for (int i = a; i <= b; ++i, t++, ac++, pc++, pf++)
	{
		if( !(t%2) && !(ac%5) && !(pc%3) && !(pf%4) ) 
		{
			printf("Todas as posicoes mudam no ano %d.\n", i);
		}
	}


	return 0;
}