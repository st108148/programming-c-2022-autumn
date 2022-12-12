#include <iostream>

bool fun(int n, int del) {
	if (del > n / 2) {
		return true;
	}
	return n % del ? fun(n, ++del) : false;
}

int main(int argc, char* argv[]) {
	int n=0;
	std::cin >> n;
	if (fun(n, 2)) {
		std::cout<<"prime";
	}
	else {
		std::cout<<"composite";
	}
	return EXIT_SUCCESS;
}
