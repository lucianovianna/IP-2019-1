#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1582


int gcd(int a, int b)
{
	if (a < b) swap( a, b );
	if (b == 0) return a;

	return gcd( b, a % b );
}


int main()
{

    int x, y, z;

    while(cin >> x >> y >> z)
    {
    	bool cfg1 = (z*z) == ((x*x) + (y*y));
    	bool cfg2 = (x*x) == ((z*z) + (y*y));
    	bool cfg3 = (y*y) == ((x*x) + (z*z));

	    if(cfg1 || cfg2 || cfg3) 
	    {
	    	int mdc = gcd(x, gcd(y, z));
	    	(mdc == 1) ? cout << "tripla pitagorica primitiva\n" : cout << "tripla pitagorica\n";

	    } else 
	    {
	    	cout << "tripla\n";
	    }
	}

    return 0;
}