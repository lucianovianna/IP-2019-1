#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2136


int main()
{
    string name, token;

    set<string> habayList;
    vector<string> normalList;

    pair<string, int> menor; 
    menor.second = 0;

    while(1)
    {
    	cin >> name;
    	if(name == "FIM") break;
    	cin >> token;

    	if(token == "YES")
    	{
	    	if(name.size() > menor.second) {
	    		menor = {name, name.size()};
	    	}
    		habayList.insert(name);
    	}
    	else normalList.push_back(name);

    }

    sort(normalList.begin(), normalList.end());

    for (auto itr = habayList.begin(); itr != habayList.end(); ++itr)
    {
    	cout << *itr << endl;
    }
    for (int i = 0; i < normalList.size(); ++i)
    {
    	cout << normalList[i] << endl;
    }

    cout << "\nAmigo do Habay:" << endl << menor.first << endl;


    return 0;
}
