#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 1;
	int st = 1;
	int i = 0;
	std::cin >> n;
	do {
		do {
			std::cout << (((st + i) < n) ? k++ : k--) << " ";
			i++;
		} while (i < n);
		std::cout << std::endl;;
		i = 0;
		st++;
		k = st;
	} while (st <= n);
	return EXIT_SUCCESS;
}

