#include <iostream>
#include <vector>

using namespace std;


//Top-Down Dynamic Programming Fibonnaci
// or Memoization Fibonnaci


unsigned long int fibonacci(int n) {
    static vector<unsigned long int> cache;

    if (n <= 1) 
    	return n;
    else if (n >= cache.size())
    	cache.resize(n+1);
    
    if (cache[n] == 0) // only recalc if we don't have a value
        cache[n] = fibonacci(n-1) + fibonacci(n-2);
    
    return cache[n];
}

   
int main()
{
	int n;
	cout << "Fibonacci(n)" << endl << "Input n: ";
	cin >> n;
	cout << fibonacci(n) << endl;
	
	return 0;
}
// Limit: fibonacci(93)
