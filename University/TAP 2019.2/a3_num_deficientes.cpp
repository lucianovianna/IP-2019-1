#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, soma=0;
	cin >> n;
	
	for(int i=2; i*i < n; i++)
	{
		if(n % i == 0)
		{	
			//cout << i << "\t" << n/i << endl;
			soma += i;
			soma += (n/i);
		}
	}
	//soma -= n + 1;
	soma++;
	
	if(soma == n) cout << n << " eh um numero perfeito.\n";
	else if(soma > n) cout << n << " eh um numero abundante.\n";
	else if(soma < n) cout << n << " eh um numero deficiente.\n";
	
	return 0;
}



