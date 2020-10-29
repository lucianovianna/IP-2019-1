#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, i=0 , j=0;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;

    if(s1 == s2) 
    {
        cout << "SIM\n";
        return 0;
    }

    
    while(i < n || j < m)
    {
        if(s1[i] == s2[j]) 
        {
            i++;
            j++;
        }
        else i++;
        
        if(i == n || j == m) break;
        //printf("i: %d  j: %d  s1: %c  s2: %c\n", i,j,s1[i], s2[j]);
    }
    //cout << j << endl;

    (j == m) ? cout << "SIM\n" : cout << "NAO\n";


    return 0;
}


/*

*/