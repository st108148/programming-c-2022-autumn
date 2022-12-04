#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int max = 0;
	int curr = 1;
	int a[1000]{ 0 };
	std::cin >> n;
	for (int i = 0;i < n;i++) {
		std::cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		if (max < a[i] * (i + 1)) {
			max = a[i] * (i + 1);
			curr = 0;
		}
		else if (i == n - 1 || a[i]<a[i+1]) {
			max += curr * a[i];
			curr = 0;
		}

		curr++;
	}
	std::cout << max;
	return EXIT_SUCCESS;
 }

