#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2180


typedef long long ll;

ll ub;
bitset <10000010> prime;
vector <ll> primelist ;


void sieve(ll n) {
	prime.set (); // set all bits to 1
	prime [0] = prime [1] = 0; // 0 and 1 are not primes

	for (ll i = 4; i <= n; i += 2) { // even > 2 is not prime
		prime[i] = 0;
	}

	for (ll i = 3; (i * i) <= n; i += 2) { // the odd numbers are primes?
		if (prime[i]) { // i is still marked as prime?
			for (ll j = i * i; j < n; j += i) {
				prime[j] = 0; // multiples of i are not primes
			}
		}
	}

	for (ll i = 2; i <= n; i++) { // create list of primes in [0..ub]
		if (prime[i]) {
			primelist.push_back(i);
		}
	}
}

bool isPrime( ll n )
{
	// O(1) for numbers n <= ub!
	if (n <= ub) return prime[n];

	// takes a little longer if n > ub!
	for (int i = 0; i < (int) primelist .size (); i++) {
		if (n % primelist [i] == 0) {
			return false;
		}
	}

	return true;
}


int main()
{
    int Peso;
    long long vel = 0;

    ub = 10000000;
 	sieve(ub);
    
    cin >> Peso;

    for (ll i = Peso, h = 1; h <= 10; i++)
    {
    	if(isPrime(i)) {
    		h++;
    		vel += i;
    		// printf("h: %lld || vel: %lld\n", h, i);
    	}
    }

    cout << vel << " km/h\n";
    cout << 60000000/vel << " h / ";
    cout << (60000000/vel)/24 << " d\n";

    return 0;
}