#include "functions.h"
#include <iostream>
#include <stdexcept>


const int32_t MAX_LEN{ 300 };


int main() {
    std::cout << "Input string, which starts without space at start and in end: " << '\n';
    try {
        char input[MAX_LEN + 1];
        std::cin.getline(input, MAX_LEN + 1);
        if (!std::cin) {
            throw std::runtime_error("Error reading input.");
        }
        ReorderWords(input);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}