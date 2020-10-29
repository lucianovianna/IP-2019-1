#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;
	string s;

	for (int i = n; i > k ; --i)
		s.push_back('0');
	for (int i = 0; i < k; ++i)
		s.push_back('1');

	//cout << s << endl;

	prev_permutation(s.begin(), s.end());
	cout << s << endl;

	while(prev_permutation(s.begin(), s.end()))
	{
		cout << s << endl;
	}


	return 0;
}