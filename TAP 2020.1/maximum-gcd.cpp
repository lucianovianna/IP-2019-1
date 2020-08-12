#include <bits/stdc++.h>
using namespace std;
// https://vjudge.net/problem/UVA-11827/origin


int main()
{
    int T;
    cin >> T;

    getchar();
    for (int I = 0; I < T; ++I)
    {
    	vector<int> M;

    	string m, aux;
    	getline(cin, m);

    	stringstream X(m);
    	while(getline(X, aux, ' '))
    	{
    		M.push_back(stoi(aux));
    	}

    	int maxgcd = 0;
    	for (int i = 0; i < M.size(); ++i)
    	{
    		for (int j = 0; j < M.size(); ++j)
    		{
    			if(i == j) continue;

    			maxgcd = max(maxgcd, __gcd(M[i], M[j]));
    		}
    	}

    	M.clear();
    	cout << maxgcd << endl;
    }


    return 0;
}
