#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2973


long long a[100000];

int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );

    int n, c;
    long long t, l, r;

    cin >> n >> c >> t;

    l = r = 0;

    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    	l = max(l, a[i]);
    	r += a[i];
    }

    long long m = -1;
    while(l <= r)
    {
    	long long mid = (l+r)/2, at = 0, ac = 1;

    	for (int i = 0; i < n; ++i)
    	{
    		if(at + a[i] > mid)
    		{
    			at = a[i];
    			ac++;
    		}
    		else
    		{
    			at += a[i];
    		}
    	}
    	if(ac > c)
    	{
    		l = mid+1;
    	}
    	else
    	{
    		m = mid;
    		r = mid-1;
    	}
    }

    cout << (m+t-1)/t << endl;

    return 0;
}
