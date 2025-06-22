#define _CRT_SECURE_NO_WARNINGS

#include "functions.h"
#include <cstring>
#include <iostream>
#include <stdexcept>

bool IsDigitsOnly(const char* str) {
    for (int32_t i{}; str[i] != '\0'; ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}


void ReorderWords(char* input) {
    const int32_t MAX_WORDS = 300;

    int32_t len = static_cast<int>(strlen(input));  
    if (len == 0) {
        throw std::runtime_error("Empty string.");
    }
    if (input[0] == ' ' || input[len - 1] == ' ') {
        throw std::runtime_error("Incorrect string format.");
    }

    char* digitWords[MAX_WORDS];
    int32_t digitCount = 0;
    char* otherWords[MAX_WORDS];
    int32_t otherCount = 0;

    char* token = strtok(input, " ");  
    if (token == nullptr) {
        throw std::runtime_error("No words to process.");
    }

    while (token != nullptr) {
        if (IsDigitsOnly(token)) {
            digitWords[digitCount] = token;
            ++digitCount;  
        }
        else {
            otherWords[otherCount] = token;
            ++otherCount;  
        }
        token = strtok(nullptr, " ");
    }

    bool printed = false;
    for (int32_t i{}; i < digitCount; ++i) {
        if (printed)
            std::cout << " ";
        std::cout << digitWords[i];
        printed = true;
    }
    for (int32_t i{}; i < otherCount; ++i) {
        if (printed) {
            std::cout << " ";
        }
        std::cout << otherWords[i];
        printed = true;
    }
    std::cout << '\n';
}