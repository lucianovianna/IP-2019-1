#include <iostream>

using namespace std;


int main(){
	
	int n, k=0, z=0, y=0, soma=0;
	cin >> n;
	int V[n][n], tmp=0;
	//
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> V[i][j];
		}
	}

	y=0;
	for(z=0; z<n; z++){
		soma += V[z][y]; // soma da 1a coluna
	}
	
	// diagonais
	k=0;
	for(z=n-1; z>=0; z--){
		tmp += V[k][z];
		k++;
	}
		if(tmp != soma)
			soma = -1;
	
	tmp = 0;
	for(z=0; z<n; z++){
		if(soma == -1)
			break;		
		tmp += V[z][z];
	}
		if(tmp != soma)
			soma = -1;
	
	
	//linhas
	for(k=0; k<n; k++){
		tmp = 0;
		if(soma == -1)
			break;
	
		for(z=0; z<n; z++){
			tmp += V[k][z];
		}
		if(tmp != soma){
			soma = -1;	}
		//cout <<	soma << endl << tmp << endl; //debug
	}
	
	
	//colunas
	for(k=0; k<n; k++){
		tmp = 0;
		if(soma == -1)
			break;
		
		for(z=0; z<n; z++){
			tmp += V[z][k];
		}
		
		if(tmp != soma)
			soma = -1;	
		
		//cout <<	soma << endl << tmp << endl; //debug
	}
	
	cout << soma << endl;

	return 0;
}

/*
-Quadrado mágico

Chama-se de quadrado mágico um arranjo, na forma de um quadrado, de N×N números inteiros tal que todas as linhas, colunas e diagonais têm a mesma soma.

Escreva um programa que, dado um quadrado, determine se ele é magico ou não e qual a soma dele (caso seja mágico).

-Entrada

A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão. A primeira linha da entrada de cada caso de teste contém um inteiro N
. As N linhas seguintes contêm N inteiros cada, separados por exatamente um espaço em branco. Os inteiros dentro do quadrado são todos maiores que 0 (zero) e menores que 1.000.

-Saída

Seu programa deve imprimir, na saída padrão, uma única linha com um inteiro representando a soma do quadrado mágico ou -1 caso o quadrado não seja mágico.

-Restrições

    2≤N≤10

*/


