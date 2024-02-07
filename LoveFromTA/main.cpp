#include <iostream>

int factorial(int n) {
    return (n <= 1) ? 1 : factorial(n - 1) * n;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}