#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1291/problem/A

int main()
{
    int t;
    cin >> t;

    while(t--){
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;

    	int oddCount = 0;
    	for(char c : s) {
    		if((c - '0') & 1) oddCount++;
    	}
    	
    	if(oddCount < 2) {
    		cout << "-1" << endl;
    		continue;
    	} 

    	int ebneSize = 0;
    	for(char c : s) {
    		if((c - '0') & 1) {
    			cout << c;
    			ebneSize++;
    		}
    		if(ebneSize == 2) break;
    	}
    	cout << endl;
    }


    return 0;
}