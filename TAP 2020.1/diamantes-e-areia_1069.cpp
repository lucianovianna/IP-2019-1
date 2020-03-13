#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1069

int main() {
	int t;	
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int resp = 0;
		string aux, s = "";
		cin >> aux;

		for (int i = 0; i < aux.size(); ++i) {
			if(aux[i] != '.') s.push_back(aux[i]);
		}
		

		int itr = s.size();
		for (int i = 0; i < itr - 1; ++i)
		{
			// cout << s << endl;

			if(s[i] == '<' && s[i+1] == '>'){
				resp++; 

				s.erase(i, 2);
				itr = s.size();
				i = -1;
			}
		}
		cout << resp << endl;
	}

	return 0;
}
