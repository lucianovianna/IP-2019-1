#include <iostream>
 
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
 
    for (int i = 0; i < t; ++i)
    {
        unsigned long int a, b, n;
        scanf("%lu %lu %lu", &a, &b, &n);
        
        if(n%3 == 0) 
            cout << a << endl;
        else if(n%3 == 1) 
            cout << b << endl;
        else 
            cout << (a ^ b) << endl;
    }
 
    return 0;
}
 

//http://codeforces.com/contest/1208/problem/A