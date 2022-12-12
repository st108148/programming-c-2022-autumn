#include <iostream>

void fun(int k){
	if (k < 1){
		std::cout;
	}
	else{
		int n;
		std::cin >> n;
		fun(k - 1);
		std::cout << n << " ";
	}
}

int main(int argc, char* argv[]){
	int n;
	std::cin >> n;
	fun(n);
	return EXIT_SUCCESS;
}