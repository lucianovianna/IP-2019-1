#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s, s2;
	cin >> s >> s2;
	
	char caracter = 'z'+1;
	int count1=0, count2=0;

	while(true)
	{
		count1=0, count2=0;
		caracter--;

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == caracter) count1++;
		}
		for (int j = 0; j < s2.size(); ++j)
		{
			if(s2[j] == caracter) count2++;
		}

		if(caracter == 'a' && count1 == count2) break;
		if(count1 != count2) break;
	}
	
	if(count1 > count2)
		cout << "First string is older" << endl;
	else if(count2 > count1)
		cout << "First string is younger" << endl;
	else 
		cout << "The two strings are the same age" << endl;

	return 0;
}