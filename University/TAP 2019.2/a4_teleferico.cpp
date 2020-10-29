#include <bits/stdc++.h>
using namespace std;


int main()
{
    int c, a;
    cin >> c >> a;
    
    int resp = a/(c-1);
    
    if(a%(c-1) > 0) resp++;

    cout << resp << endl;

    
    return 0;
}