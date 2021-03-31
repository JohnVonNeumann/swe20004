#include <iostream>

/*
 * Uses a for loop to calculate and store the rolling summation of all even numbers
 * 1 through 20 inclusive into var sum, then outputs sum to stdout
 */
int main() {
    int sum = 0;
    for (int i=1; i <= 20; i++) {
        if ((i % 2) == 0) {
            sum += i;
        }
    }
    std::cout << "Sum of evens is: " << sum;
    return 0;
}
