#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1295/A


int main()
{
  int n, t;
  cin >> t;

  for (int i = 0; i < t; ++i)
  {
  	cin >> n;
	  string s = "";
	  
	  if( (n % 2) == 0) { 
	  	do {
	  		s += "1";
	  	} while(n -= 2);
	  }
	  else{
	  	s += "7";
	  	n -= 3;
	  	while(n){
	  		s += "1";
	  		n -= 2;
	  	} 
	  }
	  
	  cout << s << endl;
  }


  return 0;
}