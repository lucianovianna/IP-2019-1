#include <iostream>
using namespace std;

//Bottom-Up Dynamic Programming Fibonnaci

 unsigned long int fibonacci(int n)
 {
    if(n == 0) return 0;
    else if (n == 1) return 1;

    /*unsigned long int fibMemo[n+1];
    fibMemo[0] = 0;
    fibMemo[1] = 1;*/ //little waste of memory

    unsigned long int aFib = 0 , bFib = 1, fib;


    for (int i = 2; i < n; ++i)
    {
    	//fibMemo[i] = fibMemo[i-1] + fibMemo[i-2];
    	fib  = aFib + bFib;
    	aFib = bFib;
    	bFib = fib;
    }

    //return fibMemo[n-1] + fibMemo[n-2];
    return aFib + bFib;
 }

   
int main()
{
	int n;
	cout << "fibonacci(n)" << endl << "Input n: ";
	cin >> n;
	cout << fibonacci(n) << endl;
	
	return 0;
}
// Limit: fibonacci(93)
