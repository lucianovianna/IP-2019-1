#include <iostream>
#include <vector>
using namespace std;


unsigned long int tripleStep(int n) // Memoization
{
	vector<unsigned long int> cache;

	
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else if(n == 2) return 2;
	else if(n == 3) return 4;
	else if(n >= cache.size())
		cache.resize(n+1);

	if(cache[n] == 0)
		cache[n] = tripleStep(n-1) + tripleStep(n-2) + tripleStep(n-3);
	
	return cache[n];
}


int main()
{
	int n;
	cout << "How many steps? ";
	cin >> n;

	cout << tripleStep(n) << " possibilities.\n";

	return 0;
}


/*
Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3
steps at a time. Implement a method to count how many possible ways the child can run up the
stairs.

Exercise 8.1 from Cracking the Coding Interview, 6th Edition
*/

