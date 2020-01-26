#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int final=0, i=0;

	for (i = 0; true; ++i)
	{	
		if(final == 6174) break;

		sort(s.begin(), s.end(), greater<int>());
		int a = stoi(s); // string to int
		
		sort(s.begin(), s.end());
		int b = stoi(s); // string to int
		final = a - b;

		s = to_string(final); // int to string
	}
	
	cout << i << endl;



	return 0;
}

