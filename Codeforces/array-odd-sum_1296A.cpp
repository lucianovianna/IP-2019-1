#include <bits/stdc++.h>
using namespace std;


int main()
{
	unordered_set <int> qntd;
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
    	char tOdd = 'n', tEven = 'n';
    	int n;
	    long int sum = 0;
    	cin >> n;
    	int a[n];
    	for (int j = 0; j < n; ++j)
    	{
    		cin >> a[j];
    		qntd.insert(a[j]);
    		sum += a[j];
    		if(tOdd == 'n' || tEven == 'n'){
    			((a[j] % 2) == 0) ? tEven = 'y' : tOdd = 'y';
    		}
    	}

    	if(sum % 2 != 0){
    		cout << "YES" << endl;
    	}
    	else if(qntd.size() <= 1){
    		cout << "NO" << endl;
    	}
    	else if(tOdd == 'y' && tEven == 'y'){
    		cout << "YES" << endl;
    	}
    	else {
    		cout << "NO" << endl;
    	}
    }


    return 0;
}