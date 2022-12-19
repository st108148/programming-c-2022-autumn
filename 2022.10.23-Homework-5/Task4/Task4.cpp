#include <iostream>

int main(int argc, char* argv[]){
	int a[1000];
	int i = 0;
	int n = 0;
	int j = 0;
	int max = 0;
	int maxi = 0;
	std::cin >> n;
	for (i;i < n;i++){
		std::cin >> j;
		a[i] = j;
	}
	for (i = 1;i < n-1;i++){
		maxi = a[i - 1] + a[i] + a[i + 1];
		if (maxi > max){
			max = maxi;
		}
	}
	std::cout << max;
	return EXIT_SUCCESS;
}