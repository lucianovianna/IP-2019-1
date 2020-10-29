#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	vector<int> lista;
	cin >> n;
	
	lista.push_back(1);
	for(int i=2; i*i <= n; i++)
	{
		if(n % i == 0)
		{	
			//cout << i << "\t" << n/i << endl; // debug
			lista.push_back(i);
			if(i != n/i)
				lista.push_back((n/i));
		}
	}
	lista.push_back(n);
	
	if(lista.size() < 4)
	{
		cout << n << " nao eh desagradavel.\n";
		return 0;
	}
	//cout << "\n\n\n" << lista.size() << "\n\n\n"; // debug
	//int t1, t2;
	/*for(int i=0; i < lista.size(); i++)
	{
		for(int j=i+1; j < lista.size(); ++j)
		{
			if(lista[i] == lista[j]) continue;
			t1 = lista[i] + lista[j];
			for(int k=0; k < lista.size(); ++k)
			{
				for(int l=k+1; l < lista.size(); ++l)
				{
					if(lista[k] == lista[l]) continue;
					t2 = fabs(lista[k] - lista[l]);
					if(t1 == t2)
					{
						//printf("%d + %d \t %d - %d\n", lista[i], lista[j], lista[k], lista[l]);// debug
						//printf("%d == %d\n", t1, t2); // debug
						cout << n << " eh desagradavel.\n";
						return 0;
					}
					//printf("%d + %d \t %d - %d\n", lista[i], lista[j], lista[k], lista[l]);// debug
					//printf("%d != %d\n", t1, t2); // debug
				}
			}
		}
	}*/ // ideia errada de novo porra
	
	for(int i=0; i < lista.size(); i++)
	{
		for(int j = 0; j < lista.size(); ++j)
		{
			if(lista[i] == lista[j]) continue;
			
			if( (lista[i] + (n/lista[i])) == (n/(lista[j]) - lista[j]) )
			{
				cout << n << " eh desagradavel.\n";
				return 0;
			}
		}
	}
	
	
	cout << n << " nao eh desagradavel.\n";
	
	
	return 0;
}










