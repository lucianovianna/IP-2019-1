#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;
	
	
	cout << s[0];
	for(int i=1; i<s.size(); i++)
	{
		if(s[i-1] != s[i])
			cout << s[i];
	}
	
	cout << endl;
	
	
	/*for(int i=1; i<s.size(); i++)
	{
		if(s[i-1] == s[i])
		{
			for(int j=i; j < s.size(); j++)
			{
				if(s[j] != s[i]) break;
				s.erase(i, j);
			}
			//cout << tmp << endl; // debug
			//cout << s.size() << "\t" << s << endl; // debug
			//cout << s.size() << "\t" << s << endl; // debug
			i=1;
		}
	}*/ // ideia errada porra 
	
	//cout << s << endl;
	

	return 0;
}





