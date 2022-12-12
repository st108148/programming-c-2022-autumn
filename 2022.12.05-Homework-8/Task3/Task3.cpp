﻿#include <iostream>

int bin(int n, int k) {
	if (k == 0 || n == k) {
		return 1;
	}
	else {
		return bin(n - 1, k - 1) + bin(n - 1, k);
	}
}

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	std::cout << bin(n,k);

	return EXIT_SUCCESS;
}