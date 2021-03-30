#include <iostream>

int main() {

    int age = 0;

    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    if (age >= 16) {
        std::cout << "Yes - you can drive!" << std::endl;
        return 0;
    } else {
        return 1;
    }

}