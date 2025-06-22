#include <iostream>
void FillintArrayByPerson(int32_t*& array, int32_t size) {
	for (size_t i{}; i < size; ++i) {
		std::cout << "Input number\n";
		std::cin >> array[i];
	}
	std::cout << "Filling of array is done\n";
}