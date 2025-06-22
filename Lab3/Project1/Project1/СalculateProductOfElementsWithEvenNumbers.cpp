#include <iostream>
int32_t ÑalculateProductOfElementsWithEvenNumbers(int32_t* array, int32_t size) {
	int32_t ProductOfElementsWithEvenNumbers{ 1 };
	if (size == 1) {
		throw std::invalid_argument("Wrong size");
	}
	for (size_t i{ 1 }; i < size; i += 2) {
		ProductOfElementsWithEvenNumbers *= array[i];
	}
	return ProductOfElementsWithEvenNumbers;
}