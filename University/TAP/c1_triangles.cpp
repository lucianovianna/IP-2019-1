#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	char c;
	cin >> n >> c;
 	
 	int aux = c;
 	
 	cout << c << endl;
 	for(int i=1; i<n; i++)
 	{
 		aux += 1;
 		if(aux > 90) aux = 65;
 		char auxc = aux;
 		
 		for(int j = 0; j < (i+1); j++)
 			printf("%c", auxc);
 		
 		cout << endl;
 	}
 	
	return 0;
}



/*
A = 65; Z = 90
*/



















