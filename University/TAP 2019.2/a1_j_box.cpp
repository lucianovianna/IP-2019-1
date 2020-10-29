#include <iostream>

using namespace std;
 

int main()
{
	int n;
	cin >> n;
	char m[n+1][n+1];
 
 	for(int i=0; i<n; i++)
 	{
 		for(int j=0; j<n; j++)
 		{
 			if(i >= 1 && j>= 1 && j < (n-1) && i < (n-1))
 				m[i][j] = 'J';
 			else
 				m[i][j] = '#';
 			cout << m[i][j];
 		}
 		printf("\n");
 	}
 	
 	
	return 0;
}





