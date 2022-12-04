#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int r = 0;
	std::cin >> n;
	for (int i = 0, j = 0; i < n;i++) {
		std::cin >> j;
		a[i] = j;
	}
	std::cin >> r;
	for (int i = 0;a[i]!=0; i++) {
		if (r > a[i]) {
			std::cout << i + 1;
			break;
		}
	}
	return EXIT_SUCCESS;
}