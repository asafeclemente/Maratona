#include <bits/stdc++.h>

int main(){

	int num_casos;
	std::cin >> num_casos;
	int resolucao[num_casos];

	for (int i=0; i < num_casos; i++){

		int a, b, x, y, esquerda, direita, acima, abaixo;
		std::cin >> a >> b >> x >> y;

		if (a==1){
			acima = 0;
			abaixo = 0;
		} else {
			acima = x;
			abaixo = a - (x+1);
		}
		//std::cout << "acima e abaixo: " << acima << ", " << abaixo << std::endl;

		if (b==1){
			esquerda = 0;
			direita = 0;
		} else {
			esquerda = y;
			direita = b - (y+1);
		}
		//std::cout << "esquerda e direita: " << esquerda << ", " << direita << std::endl;

		int top = acima * b;
		int down = abaixo * b;
		int left = esquerda * a;
		int right = direita * a;

		if ((top >= down) && (top >= left) && (top >= right)){
			resolucao[i] = top;
		}
		else if ((down >= top) && (down >= left) && (down >= right)){
			resolucao[i] = down;
		}
		else if ((left >= down) && (left >= top) && (left >= right)){
			resolucao[i] = left;
		}
		else if ((right >= down) && (right >= left) && (right >= top)){
			resolucao[i] = right;
		}
	}

	for (int i=0; i <num_casos; i++){
		std::cout << resolucao[i] << std::endl;
	}

	return 0;
}