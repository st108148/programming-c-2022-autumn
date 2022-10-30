#include <iostream>

int main(int argc, char* argv[]) {

	int x = 0;
	int count = 1;
	std::cin >> x;
	for (int i = 1; i <= (x / 2 + 1); ++i) {
		if (x % i == 0) {
			count++;
		}
	}
	std::cout << count;
	return EXIT_SUCCESS;
}