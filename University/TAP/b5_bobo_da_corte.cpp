#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;

	int carlos;
	cin >> carlos;
	for (int i = 0; i < n-1; ++i)
	{
		int outrem;
		cin >> outrem;
		if(outrem > carlos)
		{
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "S" << endl;

	return 0;
}