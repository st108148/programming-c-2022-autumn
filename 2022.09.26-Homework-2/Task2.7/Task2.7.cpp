#include <iostream>

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	std::cin >> n >> m >> k;
	if (k < n * m && (k % n == 0 || k % m == 0)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}