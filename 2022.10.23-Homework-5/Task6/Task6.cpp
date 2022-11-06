#include <iostream>

int main(int argc, char* argv[]) {
	double a[1000];
	int n = 0;
	double p = 0;
	int j = 0;
	double max = 0;
	int ind = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> j;
		a[i] = j;
	}
	for (int i = 0; i < n; i++) {
		std::cin >> p;
		a[i] = p / 100 * a[i];
		if (max < a[i]) {
			max = a[i];
			ind = i + 1;
		}
	}
	std::cout << ind;
	return EXIT_SUCCESS;
}

