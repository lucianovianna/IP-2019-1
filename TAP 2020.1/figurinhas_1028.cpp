#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1028

int maiorDiv(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return maiorDiv(b % a, a); 
} 

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int f1, f2;
		cin >> f1 >> f2;

		int resp = maiorDiv(f1, f2);

		cout << resp << endl;
	}


	return 0;
}
/*


*/