#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2222


typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int T;
    cin >> T;

	vector< vector<ull> > cj;

    while(T--)
    {
    	int n;
    	cin >> n;

    	cj.resize(n+2);

    	for (int i = 1; i <= n; ++i)
    	{
    		int Mi; 
    		cin >> Mi;

    		while(Mi--)
    		{
    			ull a; 
    			cin >> a;

    			cj[i].push_back(a);
    		}
    	}

    	int Q;
    	cin >> Q;

    	while(Q--)
    	{
    		int op, ca, cb;
    		cin >> op >> ca >> cb;

    		ull a = 0 , b = 0, c = 0;

    		for (int i = 0; i < cj[ca].size(); ++i) {
                a |= (1LL << cj[ca][i]);
            }
    		for (int i = 0; i < cj[cb].size(); ++i) {
                b |= (1LL << cj[cb][i]);
            }

            (op == 2) ? c = a | b  :  c = a & b;

    		cout << __builtin_popcountll(c) << endl;
    	}

    	// for (int i = 0; i <= n+1; ++i) cj[i].clear();
    	cj.clear();

    }

    return 0;
}

