#include <iostream>
void SortArrayFromLowestToHighest(double*& array, int32_t size) {
	for (size_t i{}; i < size-1; ++i) {
		for (size_t j{  }; j < size-i-1; ++j) {
			if (array[j] > array[j + 1]) {
				std::swap(array[j], array[j + 1]);
			}
		}
	}
}