#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/313/A


int main()
{
    long int n;
    cin >> n;
    
    if(n >= 0) {
    	cout << n << endl;
    	return 0;
    }

    int op1 = n/10;
    
    string aux = to_string(n);
    aux.erase(aux.size()-2);
    
    int op2 = stoi(aux + to_string(abs(n%10)));

    (op1 > op2) ? cout << op1 << endl : cout << op2 << endl;

    return 0;
}