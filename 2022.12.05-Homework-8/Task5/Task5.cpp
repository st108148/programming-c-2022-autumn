#include <iostream>

bool fun(int n) {
	if (n == 1) {
		return true;
	}
	else if (n < 2) {
		return false;
	}
	return fun(n - 3) || fun(n - 5);
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	std::cout << (fun(n) ? "YES" : "NO");
	return EXIT_SUCCESS;
}

