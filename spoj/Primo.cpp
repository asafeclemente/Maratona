#include <iostream>

int primo (int n){
	int divisores = 0;
	for (int i=1; i<=n; i++){
		if ((n%i) == 0){
		divisores ++;
		}
	}
	if (divisores == 2){
		return 1;
	}
	else return 0;
}
int main (){

	int n;
	std::cin >> n;

	int test_primo = primo(n);
	if (test_primo == 1){
		std::cout << "sim";
	}
	if (test_primo == 0) {
		std::cout << "nao";
	}		
	return 0;
}
