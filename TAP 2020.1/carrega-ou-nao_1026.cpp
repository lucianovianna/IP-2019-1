#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1026


int main()
{
    ios_base::sync_with_stdio( false ); 
    cin.tie( NULL );


    unsigned int a, b;

    while(cin >> a, cin >> b)
    {
    	// cout << ( ((~a) & b | (a & (~b)) ) << endl;
    	cout << (a ^ b) << endl;

    }

    return 0;
}