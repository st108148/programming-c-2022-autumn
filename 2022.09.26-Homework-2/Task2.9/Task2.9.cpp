﻿#include <iostream>

int main(int argc, char* argv[]){
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	std::cin >> m >> n >> x >> y;
	if (x > 1){
		std::cout << x - 1 << " " << y << std::endl;
	}
	if (x < n){
		std::cout << x + 1 << " " << y << std::endl;
	}
	if (y > 1){
		std::cout << x << " " << y - 1 << std::endl;
	}
	if (y < m){
		std::cout << x << " " << y + 1 << std::endl;
	}
	return EXIT_SUCCESS;
}

