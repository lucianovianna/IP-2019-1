#include <bits/stdc++.h>
using namespace std;


int main() {

	while(true) {
		string s;
		cin >> s;

		if(s == "*") break;

		int res = 0;
		float sum = 0.0;
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == '/') {
				if(sum == 1.0) res++;

				sum = 0.0;
			}
			

			switch (s[i]) {
				case 'W':
					sum += 1.0; 
					break;
				case 'H':
					sum += 1/2.0; 
					break;
				case 'Q':
					sum += 1/4.0; 
					break;
				case 'E':
					sum += 1/8.0; 
					break;
				case 'S':
					sum += 1/16.0; 
					break;
				case 'T':
					sum += 1/32.0; 
					break;
				case 'X':
					sum += 1/64.0; 
					break;
			}
		}

		cout << res << endl;
	} 
	
	return 0;
}