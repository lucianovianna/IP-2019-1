#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/144/A


int main()
{
	int n, s[300], count = -1;
	cin >> n;

	int maior = -666, menor = 99999999, maiorI, menorI;
	for (int i = 1; i <= n; ++i)
    {
    	cin >> s[i];
    	if(s[i] <= menor) menor = s[i], menorI = i;
    	if(s[i] > maior) maior = s[i], maiorI = i;
    }
    if(maiorI > menorI) count--;
    
    count += maiorI + n - menorI;

    cout << count << endl;

    return 0;
}

