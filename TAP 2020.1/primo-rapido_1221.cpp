#include <bits/stdc++.h>
using namespace std;


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
	int T;
	cin >> T;

	ub = 10000000;
 	sieve(ub);

	for (int i = 0; i < T; ++i) {
    	ll X; cin >> X;
    	(isPrime(X)) ? cout << "Prime\n" : cout << "Not Prime\n";
    }    


    return 0;
}