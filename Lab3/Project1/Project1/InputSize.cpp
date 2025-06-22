#include <iostream>
void InputSize(int32_t& size) {
	std::cout << "Input size of array\n";
	std::cin >> size;
	if (size <= 0) {
		throw std::invalid_argument("wrong size");
	}
}