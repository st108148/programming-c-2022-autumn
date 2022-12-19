#include <iostream>

int main(int argc, char* argv[]){
	int k = 0;
	int m = 0;
	int n = 0;
	int time = 0;
	std::cin >> k >> m >> n;
	if (k >= m){
		time = 2 * m;
	}
	else{
		time = (2 * n / k) * m;
		if (n % k != 0 && n % k != k / 2){
			time = time + m;
		}
	}
	std::cout << time;
	return EXIT_SUCCESS;
}