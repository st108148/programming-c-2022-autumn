#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int begin[1000] {0};
	int end[1000]{0};
	std::cin >> n;
	for (int i = 0;i < n;i++){
		std::cin >> a[i];
	}
	int k;
	std::cin >> k;
	for (int i = 0;i < k;i++){
		std::cin >> begin[i] >> end[i];
	}
	for (int i = 0;i < k;i++)
	{
		for (int j = begin[i] - 1; j < end[i];j++) {
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}
}