#include <iostream>

int main() {
    int fnumber = 0;
    std::cout << "What is your favourite number?" << std::endl;
    std::cin >> fnumber;

    // this is not my wording, this is part of text I have to include to
    // satisfy the program requirements, I believe my unglash is better than this.
    std::cout << "Amazing!! That's my favorite number too!" << std::endl
              << "No really!!, " << fnumber << " is my favorite number!" << std::endl;

    return 0;
}
