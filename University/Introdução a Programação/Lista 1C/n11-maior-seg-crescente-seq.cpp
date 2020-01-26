#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector <int> n;
	int k, num, z,count=0, max=0;
	
	cin >> num;
	for(k = 0; k < num; k++){
		cin >> z;
		n.push_back(z);
	}
	for(k = 0; k < num; k++){
		if(n[k] < n[k+1])
			count++;
		else
			count=0;
		if(count > max)
			max = count;}
	cout << "O comprimento do segmento crescente maximo e: "<< max << '\n';
	
	
	return 0;
}

