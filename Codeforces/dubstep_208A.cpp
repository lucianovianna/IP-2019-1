#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s, aux = "", res = "";
	bool token1 = false, token2 = false;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		for(int j = 0; j < 3; j++) {
			aux += s[i+j];
		}
		if(aux == "WUB") {
			if(!token1 && res.size() > 0) {
				res += " ";
			}
			token1 = true;
			i += 2;
		}
		else {
			res += s[i];
			token1 = false;
		}
		aux = "";
	}

	cout << res << endl;

    return 0;
}