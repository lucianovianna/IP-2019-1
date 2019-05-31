#include <iostream>

using namespace std;
 
 int fib(int n){
    if(n < 2){
      return 1;
    }
    return fib(n - 1) + fib(n - 2);
  }

    
int main(){
	
	int n;
	cout << "Digite o n da funcao fibonacci F(n)" << endl;
	cin >> n;
	cout << fib(n) << '\n' << "Começando pelo 1, a sequência de Fibonacci é formada somando cada numeral com o numeral que o antecede." << endl;
	
	return 0;
}


