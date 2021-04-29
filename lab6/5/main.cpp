#include <iostream>
#include <array>

const int MAXINPUT = 20;

int main() {
    std::array<char,MAXINPUT> characters = {};
    int count = 0;
    std::cout << "Enter 20 characters of the alphabet without repeating: " << std::endl;
    while (count != 20) {
        bool char_check = false;
        char input;
        std::cin >> input;
        if (isalpha(input)) {
            for (int i = 0; i < count; ++i) {
                if(characters[i] == input) {
                    std::cout << input << " is a duplicate letter" << std::endl;
                    char_check = true;
                    break;
                }
            }
            if (char_check) {
                continue;
            }
            characters[count] = input;
            count += 1;
        } else {
            std::cout << input << " is not a letter of the alphabet." << std::endl;
            continue;
        }
    }
    return 0;
}
