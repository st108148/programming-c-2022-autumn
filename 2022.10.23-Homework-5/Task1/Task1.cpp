#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000];
	int count = 0;
	int j = 0;
	int i = 0;
	int k = 0;
	std::cin >> n;
	for (i = 0;i < n;i++) {
		std::cin >> j;
		a[i] = j;
	}
	std::cin >> k;
	for (i = 0;i < n;i++) {
		if (a[i] == k) {
			count++;
		}
	}
	std::cout << count;
	return EXIT_SUCCESS;
}