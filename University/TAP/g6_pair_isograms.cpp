#include <bits/stdc++.h>
using namespace std;


vector <char> letra;
bool isNew(char c)
{
	if(letra.size() == 0) return true;

	for (int i = 0; i < letra.size(); ++i)
	{
		if(c == letra[i])
		{
			return false;
		}
	}
	return true;
}


bool solve(string s, char c, int j)
{
	int count1 = 0;
	for (int i = j; i < s.size(); ++i)
	{
		if(s[i] == c) count1++;
	}
	if(count1 == 2) return true;
	else return false;
}


int main()
{
	string s;
	cin >> s;
	char caracter, t2 = 'y';
	int t1;


	for (int i = 0; i < s.size(); ++i)
	{
		if(isNew(s[i])) 
		{
			t1 = i;
			letra.push_back(s[i]);
			caracter = s[i];
		}
		else continue;

		if(!solve(s, caracter, t1))
		{
			t2 = 'n';
			break;
		}
	}

	(t2 == 'y') ? cout << s << " --- pair isograms" << endl
	: cout << s << " --- not pair isograms" << endl;

	return 0;
}