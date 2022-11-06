#include <iostream>

int main(int argc, char* argv[]) {
	int a[1000];
	int i = 0;
	int n = 0;
	int j = 0;
	int max = 0;
	int min = 1000;
	std::cin >> n;
	for (i = 0;i < n;i++) {
		std::cin >> j;
		a[i] = j;
	}
	for (i=0;i<n;i++) {
		if (a[i] > max) {
			max = a[i];
		}

	}
	for (i=0;i<n;i++) {
		if (a[i] < min) {
			min = a[i];
		}

	}
	for (i = 0;i < n;i++) {
		if (a[i] == max) {
			a[i] = min;
		}
	}
	for (i = 0;i < n;i++) {
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
		
}
