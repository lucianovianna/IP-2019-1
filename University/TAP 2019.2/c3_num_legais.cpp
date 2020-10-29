#include <bits/stdc++.h>
using namespace std;


//const int N = 1e6;
//long int jj[N];
//long int jjj[N];;


int main()
{
    int a, b, count=0;
    cin >> a >> b;

    for(int i=1; i*i <= b; i++)
    {
        for(int j=1; j*j*j <= b; j++)
        {
            if(i*i == j*j*j & i*i >= a)
            {
                count++;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
    
    /*for(int i=1; i*i <= b; i++) // calcula todos os quadrados até a raiz
    {
        jj[i] = i*i;
        //printf("%d * %d: %ld\n", i, i, jj[i]);
    }

    for(int i=1; i*i*i <= b; i++) // todos os cubos até a raiz cubica
    {
        jjj[i] = i*i*i;
        //printf("%d * %d * %d: %ld\n", i, i, i, jjj[i]);
    }*/
    
    /*for(int i=1; i*i <= b; i++) // conferindo
    {
        for(int j=1; j*j*j <= b; j++)
        {
            if(jj[i] == jjj[j] && jj[i] >= a)
            {
                count++;
                break;
            }
        }
    }*/
}
