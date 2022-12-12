#include <iostream>

int han(int count, int from, int to) {
	if (count <= 0) {
		return;
	}
	int tmp = 6 - from - to;
	han(count - 1, from, tmp);
	std::cout << "Disk " << count << " from " << from << " to " << to << std::endl;
	han(count - 1, tmp, to);
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	han(n, 1, 2);
	return EXIT_SUCCESS;
}
