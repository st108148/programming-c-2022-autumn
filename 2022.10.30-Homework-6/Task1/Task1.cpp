﻿#include <iostream>

int main(int argc, char* argv[]){
	int n = 0;
	int a[1000]{ 0 };
	std::cin >> n;
	for (int i = 0, j = 0; i < n;i++){
		std::cin >> j;
		a[i] = j;
	}
	for (int i = n - 1;i >= 0;i--) {
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}