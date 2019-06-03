#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, c, m, rest=0;
	cin >> n >> c >> m;
	int M[m], C[c], k, z=0;
	
	for(k=0; k<c; k++){
		cin >> C[k];
		rest++;
	}
		for(k=0; k<m; k++){
				cin >> M[k];
			}
	
	for(k=0; k<c; k++){
		for(int i=0; i<m; i++){
			if(C[z] == M[i]){ 
				rest--;
				break;}
		}
		z++;
	}
	
	cout << rest << endl;
	
	return 0;
}

/*

-> Figurinhas da copa (OBI 2018 Fase1)

Em ano de Copa do Mundo de Futebol, o álbum de figurinhas oficial é sempre um grande sucesso entre crianças e também entre adultos. Para quem não conhece, o álbum contém espaços numerados de 1 a N para colar as figurinhas; cada figurinha, também numerada de 1 a N, é uma pequena foto de um jogador de uma das seleções que jogará a Copa do Mundo. O objetivo é colar todas as figurinhas nos respectivos espaços no álbum, de modo a completar o álbum (ou seja, não deixar nenhum espaço sem a correspondente figurinha).

Algumas figurinhas são carimbadas (efetivamente têm um carimbo impresso sobre a fotografia do jogador) e são mais raras, mais difíceis de conseguir.

As figurinhas são vendidas em envelopes fechados, de forma que o comprador não sabe quais figurinhas está comprando, e pode ocorrer de comprar uma figurinha que ele já tenha colado no álbum.

Para ajudar os usuários, a empresa responsável pela venda do álbum e das figurinhas quer criar um aplicativo que permita gerenciar facilmente as figurinhas que faltam para completar o álbum.

Dados o número total de espaços e figurinhas do álbum (N), a lista das figurinhas carimbadas e uma lista das figurinhas já compradas (que pode conter figurinhas repetidas), sua tarefa é determinar quantas figurinhas carimbadas faltam para completar o álbum.

-Entrada

A primeira linha contém três números inteiros N, C e M indicando respectivamente o número de figurinhas (e espaços) do álbum, o número de figurinhas carimbadas do álbum e o número de figurinhas já compradas. A segunda linha contém C números inteiros distintos Xi indicando as figurinhas carimbadas do álbum. A terceira linha contém M números inteiros Yi indicando as figurinhas já compradas.

-Saída

Seu programa deve produzir uma única linha, contendo um inteiro, o número de figurinhas carimbadas que faltam para completar o álbum.
Restrições

    1 ≤ N ≤ 100
    1 ≤ C ≤ N/2
    1 ≤ M ≤ 300
    1 ≤ Xi, Yi ≤ N 
    
*/
