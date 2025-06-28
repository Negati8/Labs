#include "functions.h"

int main() {
    try {
        Task();
    }
    catch (const std::exception& exc) {
        std::cout << "Impossible to solve: " << exc.what() << '\n';
    }
    catch (...) {
        std::cout << "Unknown error" << '\n';
    }
    return 0;
}