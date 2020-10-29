#include <bits/stdc++.h>
using namespace std;


double seq[10000];


int main()
{
    int N;
    cin >> N; 

    int count = 0, t = 1, t2, count2 = 1;
    for (int i = 1; i <= N; ++i)
    {
        if(!seq[i] && !count)
        {
            seq[i] = pow(5, t);
            count = i;
            t2 = i;
            t++;
            count2 = 0;
        }
        else if(count && i >= 2 && !seq[i])
        {
           	seq[i] += seq[count2];
            //printf("conta: %.0lf + %.0lf\n", seq[t2], seq[count2]);
            seq[i] += seq[t2];

        }
        //printf("seq[%d]: %.0lf ||| count = %d ||| (t2 - count ): %d\n", i, seq[i], count, t2-count);
        count--;
        count2++;
    }
    printf("%.0lf\n", seq[N]);
    
    return 0;
}