#include <bits/stdc++.h>
using namespace std;

bool test(string n)
{
    for(int i=n.size()-1; i > 0; i--)
    {
        //cout << n[i] + 10;
        if(n[i] > n[i-1])
            return false;
    }
    
    return true;
}


int main()
{
    string n;
    cin >> n;
    
   if(test(n)) cout << "USELESS" << endl;
   else
   {
       next_permutation(n.begin(), n.end());
       cout << n << endl;
   }

    return 0;
}