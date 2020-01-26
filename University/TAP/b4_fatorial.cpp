#include <bits/stdc++.h>
using namespace std;



int main()
{
	vector <unsigned long long int> cabe;
	cabe.push_back(1); // 1!

    int n;
    cin >> n;


    for (unsigned long long int i = 2; i <= n; ++i)
    {
	    unsigned long long int fat = 1;
	    for (unsigned long long int j = i; j >= 2; --j)
	    {
	    	fat *= j;
	    }
    	if(fat <= n) cabe.push_back(fat);
    	else
    	{
    		break;
    	}
    	//cout << "i: " << i << "\t fat(i): "<< fat << endl;
	}


	unsigned long long int aux = n;
	int count=0;
	for (int k = cabe.size()-1; k >= 0; k--)
	{
		if(aux == 0)
		{
			break;
		}
		while(true)
		{
			long long int tmp = aux - cabe[k];
			if(tmp < 0) break;
			else
			{
				count++;
				//cout << "cabe[k]: " << cabe[k] << endl;
				aux -= cabe[k];
			}
		}
	}


	cout << count << endl;

    
    return 0;
}