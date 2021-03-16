#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float area = 0;
    float radius;
    std::cout << "Input radius of circle:\n";
    std::cin >> radius;
    // M_PI sourced from cmath
    // area = pi * radius^2
    area = M_PI * pow(radius, 2);
    std::cout << "Area of circle: " << area;
    return 0;
}
