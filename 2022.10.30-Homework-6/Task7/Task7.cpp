#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int max = -10000;
	int maxi = 0;
	int min = 10000;
	int mini = 0;
	int pr = 1;
	int summ = 0;
	int a[1000]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (min > a[i]) {
			min = a[i];
			mini = i;
		}
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			summ += a[i];
		}
		if (i > mini && i < maxi || i < mini && i > maxi) {
			pr *= a[i];
		}
	}
	std::cout << summ << " " << pr;
	return EXIT_SUCCESS;
}