#include <iostream>
#include <string>
#include <exception>
#include "functions.h"

int main() {
    try {
        std::string input{};
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);

        std::string output{ ProcessString(input) };

        std::cout << output << '\n';
    }
    catch (const std::exception& ex) {
        std::cout << "An exception occurred: " << ex.what() << '\n';
    }
    catch (...) {
        std::cout << "Error." << '\n';
    }
    return 0;
}