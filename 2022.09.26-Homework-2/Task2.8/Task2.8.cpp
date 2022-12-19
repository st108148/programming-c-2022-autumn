#include <iostream>

int main(int argc, char* argv[]){
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if (a + b > c && c + b > a && a + c > b){
        if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)){
            std::cout << "right";
        }
        else if ((a * a + b * b > c * c) || (a * a + c * c > b * b) || (c * c + b * b > a * a)){
            std::cout << "acute";
        }
        else if ((a * a + b * b < c * c) || (a * a + c * c < b * b) || (c * c + b * b < a * a)){
            std::cout << "obtuse";
        }
    }
    else{
        std::cout << "impossible";
    }
    return EXIT_SUCCESS;
}

