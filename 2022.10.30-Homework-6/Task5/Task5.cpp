#include <iostream>

int main(int argc, char* argv[]){
	int n = 0;
	int t = 0;
	int min = 0;
	int a[1000]{0};
	min = 100000;
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
		if (min > a[i]){
			min = a[i];
		}
	}
	while (a[0] != min){
		t = a[0];
		for (int i = 0; i < n; i++){
			a[i] = a[i + 1];
		}
		a[n - 1] = t;
	}
	for (int i = 0; i < n; i++){
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}
