#include <iostream> 

int main(int argc, int argv[]) {
	int N = 0;
	double sum = 1;
	double t = 1;
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		t *= i;
		sum += 1 / t;
	}
	std::cout << sum;
	return EXIT_SUCCESS;
}