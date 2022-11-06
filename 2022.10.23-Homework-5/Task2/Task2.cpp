#include <iostream>

int main(int argc, char* argv[]) {
	int a[1000];
	int i = 0;
	int n = 0;
	int j = 0;
	int l = 0;
	int r = 0;
	int max = 0;
	int ind = 0;
	std::cin >> n;
	for (i = 0;i < n;i++) {
		std::cin >> j;
		a[i] = j;
	}
	std::cin >> l;
	l--;
	std::cin >> r;
	r--;
	for (l;l <= r;l++) {
		if (a[l] > max) {
			max = a[l];
			ind = l+1;
		}
		
	}
	std::cout << max<<" ";
	std::cout << ind;
	return EXIT_SUCCESS;
}