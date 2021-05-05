// Program takes in input from the user and then sorts and calculates the mode
// of the char array, finding the most common character input to the user

#include <iostream>
#include <array>

const int MAXINPUT = 20;

void sort_array(int count, std::array<char, MAXINPUT> chars) {

    std::cout << "The original array is:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << chars[i];
    }

    std::sort(std::begin(chars), std::end(chars));

    std::cout << "\nThe sorted array is:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << chars[i];
    }

}

void calculate_mode(int size, std::array<char, MAXINPUT> chars) {

    int counter = 1;
    int max = 0;
    char mode = chars[0];
    for (int i = 0; i < size - 1; i++)
    {
        if ( chars[i] == chars[i+1] )
        {
            counter++;
            if ( counter > max )
            {
                max = counter;
                mode = chars[i];
            }
        } else
            counter = 1;
    }
    std::cout << "\nThe mode is " << mode << " and it occurs " << counter << " times." << std::endl;
}

int main() {
    std::array<char,MAXINPUT> characters = {};
    int count = 0;
    std::cout << "Enter 20 characters of the alphabet without repeating: " << std::endl;
    while (count != 20) {
        char input;
        std::cin >> input;
        if (isalpha(input)) {
            for (int i = 0; i < count; ++i) {
                if(characters[i] == input) {
                    std::cout << input << " is a duplicate letter" << std::endl;
                    break;
                }
            }
            characters[count] = input;
            count += 1;
        } else {
            std::cout << input << " is not a letter of the alphabet." << std::endl;
            continue;
        }
    }

    sort_array(MAXINPUT, characters);
    calculate_mode(MAXINPUT, characters);
    return 0;
}

