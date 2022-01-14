#include <iostream>

double f(double x);

int main() {
    double x = 5;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f(x) << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "f = " << f(x) << std::endl;
    return 0;
}