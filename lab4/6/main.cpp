#include <iostream>

int main() {
    int sum = 0;
    for (int i=1; i < 16; i++) {
        if ((i % 2) != 0) {
            sum += i;
        }
    }
    std::cout << "Sum of odd is: " << sum;
    return 0;
}
