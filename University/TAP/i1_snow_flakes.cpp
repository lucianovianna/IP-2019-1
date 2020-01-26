#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, result=0;
    cin >> n;
    int sf[n+5][n+5];

    for(int i=0; i<n; i++)
    {
        string saux;
        cin >> saux;
        for(int j=0; j<n; j++)
        {
            //cin >> sf[i][j];
            sf[i][j] = saux[j];
        }
    }

    char t1 = 'y', t2 = 'y';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(sf[i][j] != sf[i][(n-1)-j])
            {
                t1 = 'n';
            }
            if(sf[i][j] != sf[(n-1)-i][j])
            {
                t2 = 'n';
            }
        }
    }
    if(t2 == 'y') result+= 1;
    if(t1 == 'y') result+= 5;

    if(result == 0) cout << "Useless" << endl;
    else if(result == 1) cout << "Beautiful" << endl;
    else if (result == 5) cout << "Graceful" << endl;
    else cout << "Magnificent" << endl;


    return 0;
}