#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/451/A

int main()
{
	int n, m, R = 0;
	cin >> n >> m;

	while(true) {
		n--, m--;
		// printf("%d || %d\n", n, m);
		if(n <= 0 || m <=0) break;

		R++;
	}

	// cout << R << endl << R%2 << endl;
	(R%2) ? cout << "Malvika\n" : cout << "Akshat\n";

    return 0;
}