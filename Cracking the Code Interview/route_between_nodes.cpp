#include <iostream>
#include <vector>
using namespace std;


vector<int> list[1000000];
int componente[1000000];


int dfs(int x, int target)
{
	for (int i = 0; i < list[x].size(); ++i)
	{
		int v = list[x][i];

		if(v == target) return 1;

		if(componente[v] == -1)
		{
			componente[v] = x;
			dfs(v , target);
		}
	}

	return 0;
}


int main()
{
	cout << "Enter the number of nodes: ";
	int n;
	cin >> n;
	

	for(int i = 1; i <= n; i++) componente[i] = -1;

	cout << "Now the routes between the nodes\n(type 0 to end)\n";
	while(true)
	{
		int a, b;
		cin >> a >> b;
		if(a == 0 || b == 0) break;

		list[a].push_back(b);
	}


	while(true)
	{
		cout << "Type 2 nodes to see if have route between then\n(Type 0 to leave)\n";
		int a, b;
		cin >> a >> b;

		if(a == 0 || b == 0) return 0;

		if(dfs(a, b)) printf("\n\nExist route between %d and %d\n\n", a , b);
		else printf("\n\nThere is no route between %d and %d\n\n", a, b);
	}

	return 0;
}

/*
Route Between Nodes: Given a directed graph, design an algorithm to find out whether there is a
route between two nodes.

Question 4.1 from Cracking the Coding Interview, 6th Edition.			
*/