#include <iostream>

int main(int argc, char* argv[]) {
	int a[1000];
	int n = 0;
	int j = 0;
	int k = 0;
	int max = 10000;
	int temp = 0;
	std::cin >> n;
	for (int i=0;i < n;i++) {
		std::cin >> j;
		a[i] = j;
	}
	std::cin >> k;
	for (int i = 0;i < n;i++) {
		if (abs(k - a[i]) <= max) {
			max = abs(k - a[i]);
			temp = a[i];
		}
	}
	std::cout << temp;
	return EXIT_SUCCESS;
}
