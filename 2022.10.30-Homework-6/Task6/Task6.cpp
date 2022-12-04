#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int k = 0;
	int a[1000]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			std::cout << a[i] << " ";
			m++;
		}
	}
	std::cout << std::endl;;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			std::cout << a[i] << " ";
			k++;
		}
	}
	std::cout << std::endl << (k > m ? "YES" : "NO");
	return EXIT_SUCCESS;
}