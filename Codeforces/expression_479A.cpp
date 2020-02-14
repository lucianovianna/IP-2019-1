#include <bits/stdc++.h>
using namespace std;
// http://codeforces.com/problemset/problem/479/A


int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int eq1 = a + b + c,
    	eq2 = a + b * c,
    	eq3 = (a + b) * c,
    	eq4 = a * b + c,
    	eq5 = a * b * c,
    	eq6 = a * (b + c);

    int best = max(eq5, max(eq1, max(eq2, max(eq3, max(eq4, eq6)))));
    cout << best << endl;


    return 0;
}