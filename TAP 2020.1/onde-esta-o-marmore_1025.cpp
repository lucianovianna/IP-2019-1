#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1025

int main() {
	
	for(int teste = 1; true; teste++) {
		int n, q;
		cin >> n >> q;
		
		if(!n || !q) break;

		int N[n+10], Q[q+10];

		for (int i = 0; i < n; ++i) cin >> N[i];
		for (int i = 0; i < q; ++i) cin >> Q[i];

		sort(N, N+n);

		printf("CASE# %d:\n", teste);
		for (int i = 0; i < q; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(N[j] == Q[i]){
					printf("%d found at %d\n", Q[i], j+1);
					break;
				}
				else if(j == n - 1) {
					printf("%d not found\n", Q[i]);
				}				
			}
		}
	}


	return 0;
}

/*


*/