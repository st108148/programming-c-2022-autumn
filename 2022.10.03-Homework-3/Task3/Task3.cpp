#include <iostream>

int main(int argc, char* argv[]){
	int n = 0;
	int st = 0;
	int main_st = 0;
	st = 1;
	main_st = 1;
	std::cin >> n;
	do{
		do{
			std::cout << main_st++ << " ";
		} while (main_st != n + st);
		std::cout << "\n";
		st++;
		main_st = st;
	} while (st <= n);
	return EXIT_SUCCESS;
}
