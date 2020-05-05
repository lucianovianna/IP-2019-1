#include <bits/stdc++.h>
using namespace std;
// codeforces.com/problemset/problem/469/A

short int tk[105];

int main()
{
    int n, p, q;
    cin >> n;

    cin >> p;
    for (int i = 0; i < p; ++i)
    {
    	int tmp;
    	cin >> tmp;
    	tk[tmp] = 1;
    }

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
    	int tmp;
    	cin >> tmp;
    	tk[tmp] = 1;
    }

    for (int i = 1; i <= n; ++i)
    {
		if(!tk[i]) {
			cout << "Oh, my keyboard!\n";
			return 0;
		}
    }
    cout << "I become the guy." << endl;

    return 0;
}