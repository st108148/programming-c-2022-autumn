#include <iostream>

int main(int argc, char* argv[]){
	int n = 0;
	int count = 0;
	n = 1;
	while (n != 0){
		std::cin >> n;
		if (n < 0){
			count += 1;
		}
	}
	std::cout << count;
	return EXIT_SUCCESS;
}