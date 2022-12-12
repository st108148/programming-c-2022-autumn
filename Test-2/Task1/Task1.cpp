#include <iostream>

int n = 0;
int k = 0;
int a[10]{ 0 };
int sum = 0;

bool pr(int i, int t, int p) { 
    int x = i - p;             
    int y = t - a[p];
    x *= x;
    y *= y;
    return t < 0 || p == i || (a[p] < 0 || y != 0 && x != y && x + y != 5)  && pr(i, t, p + 1);    
}

void f(int i, int j) { 
    if (i == n) {      
        if (j == k) {
            sum++;
        }   
        return;

    }
    for (int t = -1; t < (j == k ? 0 : n); t++) {
        if (pr(i, t, 0)) { 
            a[i] = t;       
            f(i + 1, j + (t >= 0)); 
        }
    }
}

int main(int argc, char* argv[]) {
    std::cin >> n >> k;
    f(0, 0);
    std::cout << sum;
    return EXIT_SUCCESS;
}