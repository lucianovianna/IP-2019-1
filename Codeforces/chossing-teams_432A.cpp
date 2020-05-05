#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/432/A


int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int t[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> t[n];
    	t[n] += k;

    	if(t[n] <= 5) count++;
    }

    cout << count/3 << endl;



    return 0;
}