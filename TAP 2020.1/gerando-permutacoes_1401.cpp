#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;

    while(T--)
    {
    	string s;
    	cin >> s;

    	sort(s.begin(), s.end());

    	cout << s << endl;
    	while(next_permutation(s.begin(), s.end()))
    	{
    		cout << s << endl;
    	}
    	cout << endl;
    }


    return 0;
}

