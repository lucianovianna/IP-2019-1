#include <bits/stdc++.h>
using namespace std; 
  

int main() 
{ 
    int n, ii, iii;
    pair <int, int> nv, rota;
    cin >> n;
    char space[n+5][n+5];

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<n; j++)
        {
            space[i][j] = s[j];
            if(space[i][j] == 's')
            {
                nv = make_pair(i, j);
            }
        } 
    }

    float menor = 100000001.6;
  
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(space[i][j] == 'p')
            {
                float tmp = sqrt( (fabs(nv.first-i)*fabs(nv.first-i) ) + ( fabs(nv.second-j)*fabs(nv.second-j) ) );
                if(tmp < menor)
                {
                    rota = make_pair(i, j);
                    menor = tmp;
                }
            }
        }
    }

    printf("(%d,%d):(%d,%d):%.2f\n", nv.first, nv.second, rota.first, rota.second, menor);

    return 0; 
} 
