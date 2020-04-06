#include <bits/stdc++.h>

int maior(int* vetor, int k){

	int max = vetor[0];
	for (int i=1; i<k; i++){
		if (vetor [i] > max){
			max = vetor[i];
		}
	}

	return max;
}


int main(){

	int m, n;
	
	std::cin >> m >> n;
	
	int fazenda [m][n];
	int soma_linha [m] = {};
	int soma_coluna [n] = {};


 	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
		std::cin >> fazenda [i][j];
		}
	}

	for(int i=0; i<m; i++){
		for (int j=0; j< n; j++){
			soma_linha[i] += fazenda [i][j];
		}	
	}

	for(int j=0; j<n; j++){
		for (int i=0; i< m; i++){
			soma_coluna[j] += fazenda [i][j];
		}	
	}

	std::cout << std::endl;

	int maior_linha = maior(soma_linha, m);
	int maior_coluna = maior(soma_coluna, n);

	if (maior_coluna > maior_linha){
		std::cout << maior_coluna;
	}else{
		std::cout << maior_linha;
	}
	return 0;
}
