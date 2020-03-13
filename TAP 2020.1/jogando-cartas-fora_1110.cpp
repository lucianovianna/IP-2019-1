#include <bits/stdc++.h>
using namespace std;
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

int main() {
	int n;

	while(true) {
		list <int> pilha, descartados;
		cin >> n;
		if(n == 0) break;

		for (int i = 1; i <= n; ++i) {
			pilha.push_back(i);
		}

		while(pilha.size() >= 2) {
			descartados.push_back(pilha.front());

			pilha.pop_front();
			pilha.push_back(pilha.front());
			pilha.pop_front();
		}

		cout << "Discarded cards: ";

		while(descartados.size()) {
			cout << descartados.front();

			if(descartados.size() > 1) cout << ", ";

			descartados.pop_front();
		}

		cout << endl << "Remaining card: " << pilha.front() << endl; 
	}
	return 0;
}

