#include <bits/stdc++.h>
using namespace std;


long int powerMod(long int x, unsigned long int y, long int p)  // muito top esse codigo
{ 
    long int result = 1;
    x = x % p;
   
    while(y > 0) 
    { 
        if (y & 1){ 
            if(p != 0) result = (result*x) % p; 
            else result = 0;
        }

        y = (y >> 1); // y = y/2
        if(p != 0) x = (x*x) % p;
        else x = 0;
    } 
    return result; 
}


int main()
{
	long int p, n;
	cin >> p >> n;

    for (int i = 0; i < n; ++i)
    {
        long int r, aux_;
        set<long int> unique;
        cin >> r;

        for (long int y = 1; y <= p-1; ++y)
        {
            aux_ = powerMod(r, y, p);
            
          	cout << "aux_: " << aux_ << " y: " << y << " - unique.size: "
            << unique.size() << " - unique.count(aux_): " 
            << unique.count(aux_) << endl; // debugs
            
            if(unique.count(aux_) > 0) break;
            unique.insert(aux_);
          	
        }
        (unique.size() == p-1) ? cout << "SIM\n" : cout << "NAO\n";
    }



	return 0;
}
/*

(a*b) % p = ((a % p) * (b % p)) % p;

*/