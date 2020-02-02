#include <bits/stdc++.h>
using namespace std;
// http://codeforces.com/problemset/problem/443/A

int main()
{
	string s;
	// cin >> s;
	getline(cin, s);
	unordered_set <char> s_set;	

	// cout << s << endl;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] >= 97 && s[i] <= 122){
			s_set.insert(s[i]);
			// cout << "debug " << s[i] << endl;
		}
	}

	cout << s_set.size() << endl;

    return 0;
}

/*
'a' = 97
'z' = 122
*/