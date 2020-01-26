#include <iostream>

using namespace std;
 

int main()
{
	string c;
	cin >> c;
	
	for(int i = 0; i < c.size(); i++)
	{
		if(c[i] == '-' && c[i+1] == '-')
		{
			cout << '2';
			i++;
		}
		else if(c[i] == '-' && c[i+1] == '.')
		{
			cout << '1';
			i++;
		}
		else if(c[i] == '.')
			cout << '0';
	}
	cout << endl;
	
	
 
	return 0;
}

// http://codeforces.com/problemset/problem/32/B



