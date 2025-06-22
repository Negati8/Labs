#include <iostream>
inline int32_t FindMinElementNumber(double*& array, int32_t size) {
	int32_t minElementNumber{};
	for (int32_t i{}; i < size; ++i) {
		if (array[i] <= array[minElementNumber]) {
			minElementNumber = i;
		}
	}
	return minElementNumber;
}