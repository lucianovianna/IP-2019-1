#include <bits/stdc++.h>
using namespace std;


int main()
{
	float r;
	cin >> r;
	string s;
	
	while(cin >> s)
	{
		if	   (s[0] == '%') r = r+5;
		else if(s[0] == '@') r = r*3;
		else if(s[0] == '#') r = r-7;
	}
	
	printf("%.2f\n", r);

	return 0;
}





