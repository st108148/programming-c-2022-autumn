#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	std::cin >> a >> b >> c >> d;
	if (c == d && c == 0) {
		std::cout << "c i d ne mogut bit' ravni nulyu odnovremenno, vvedite drugie chisla " << std::endl;
		std::cin >> a >> b >> c >> d;
	}
	if ((a == 0 && b != 0) || b * c == a * d) {
		std::cout << "NO";

	}
	else if (a == 0 && b == 0) {
		std::cout << "INF";
	}
	else {
		x=-b / a;
		std::cout << x;
	}
	return EXIT_SUCCESS;
}
