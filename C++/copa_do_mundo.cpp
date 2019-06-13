#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int p[N];
int s[N];

void init(int n){
	for(int i=0; i<n; i++){
		s[i] = 1;
		p[i] = i;
	}
}
int find(int i){
	if(p[i] == i) return i;
	return p[i] = find(p[i]);

}
void join(int x, int y){
	x = find(x);
	y = find(y);

	if(x==y) return;

	if(s[x] > s[y]){
		p[y] = x;
		s[x] += s[y];
	} else {
		p[x] = y;
		s[y] += s[x];	
	}
}


pair<int, pair<int,int> > v[1010];
int main(){
	int a, b, p ,n;
	int f, r;
	cin >> n >> f >> r;
	init( (f+r) );
	for(int i = 0; i<f; i++){
		cin >> a >> b >> p; 
		v[i] = make_pair(p, make_pair(a, b));//{p, {a,b}};
	}
	sort(v, v+(f));
	
	int total = 0;
	for(int i =0; i<f; i++){
		if(find(v[i].second.second) != find(v[i].second.first)){ 
			join(v[i].second.second, v[i].second.first); 
			total += v[i].first;
		}
	}
	
	
	for(int i = 0; i<r; i++){
		cin >> a >> b >> p; 
		v[i] = make_pair(p, make_pair(a, b));//{p, {a,b}};
	}
	sort(v, v+r);
	
	for(int i =0; i<r; i++){
		if(find(v[i].second.second) != find(v[i].second.first)){ 
			join(v[i].second.second, v[i].second.first); 
			total += v[i].first;
		}
	}
	
	cout << total << endl;
	return 0;	
}



/*

Copa do Mundo

A Nlogônia é atualmente um dos países com maior crescimento econômico no mundo, e seus governantes têm se esforçado para que o país seja mais conhecido e respeitado internacionalmente. Recentemente a Nlogônia foi escolhida para ser a sede da Copa do Mundo de Futebol Amador, e está se preparando para receber os milhares de torcedores que o evento atrai.

Como parte da preparação para a Copa, o governo planeja realizar uma reforma em todo o sistema de transporte intermunicipal, que é hoje composto de uma malha de rodovias e ferrovias, cada rodovia ou ferrovia interligando um par de cidades. Com as rodovias e ferrovias existentes já é possível viajar entre qualquer par de cidades (possivelmente passando por outras cidades no caminho), mas o governo quer oferecer melhores condições de transporte para os visitantes e a população.

Como não há recursos para reformar todas as rodovias e ferrovias, o governo quer escolher um conjunto de rodovias e ferrovias para ser reformado, e já realizou um estudo para estabelecer o custo de reforma de cada rodovia e ferrovia. A escolha deve obedecer aos seguintes critérios:

ao final da reforma, deve ser possível viajar entre qualquer par de cidades (possivelmente passando por outras cidades) utilizando apenas rodovias ou ferrovias reformadas;
para priorizar o transporte público, dentre as escolhas que satisfazem a restrição 1, deve-se escolher uma que minimize o número de rodovias reformadas;
dentre as escolhas que satisfazem as restrições 1 e 2, deve-se escolher uma que minimize o custo total.
Você foi contratado para escrever um programa que, conhecidos os custos de reforma de cada rodovia e ferrovia, determine o menor custo possível para a reforma, obedecidos os critérios estabelecidos.

Input
A primeira linha da entrada contém três inteiros N, F e R, indicando respectivamente o número de cidades, de ferrovias e de rodovias. As cidades são identificadas por inteiros de 1 a N. Cada uma das F linhas seguintes descreve uma ferrovia e contém três inteiros A, B e C, onde A e B representam cidades e C representa o custo da reforma da ferrovia que interliga A e B. Cada uma das R linhas seguintes descreve uma rodovia e contém três inteiros I, J e K, onde I e J representam cidades e K representa o custo da reforma da rodovia que interliga I e J.

2 ≤ N ≤ 100; 1 ≤ F ≤ N(N-1)/2; 1 ≤ R ≤ N(N-1)/2
1 ≤ A < B ≤ N e 1 ≤ I < J ≤ N
1 ≤ C ≤ 1000 e 1 ≤ K ≤ 1000

Output
Seu programa deve produzir uma única linha, contendo o menor custo possível para o conjunto de reformas de ferrovias e rodovias, obedecendo aos critérios estabelecidos.

*/












