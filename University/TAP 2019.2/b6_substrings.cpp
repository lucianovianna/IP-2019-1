#include <bits/stdc++.h>
using namespace std;



int main()
{
	string s;
	cin >> s;
	
	unordered_set<string> diff;

	//long long int count = 1;
	// for (int i = 0; i < s.size(); ++i)
	// {
	// 	for (int j = 1; j <= s.size()-i; ++j)
	// 	{
	// 		string aux = s.substr(i,j);
	// 		if(diff.find(aux) == diff.end())
	// 		{
	// 			cout << s.substr(i, j) << ' ';
	// 			diff.insert(aux);
	// 			count++;
	// 		}
	// 	}
	// } 
    for (int i = 0; i < s.size(); ++i) { 
        string aux = ""; 
        for (int j = i; j < s.size(); ++j) { 
  
            aux = aux + s[j]; 
            diff.insert(aux);
            //cout << aux << " ";
        } 
    } 

	printf("%d\n", diff.size()+1);
	return 0;
}