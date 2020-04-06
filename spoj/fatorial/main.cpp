#include <bits/stdc++.h>

int main(){

	int n;
	std::cin >> n;

	for (int i=(n-1); i >= 1; i--){
		n = n*i;
	}

	std::cout << n << std::endl;

	return 0;
}