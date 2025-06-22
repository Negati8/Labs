#include <iostream>
inline int32_t FindMaxElementNumber(double*& array, int32_t size) {
	int32_t maxElementNumber{};
	for (int32_t i{}; i < size; ++i) {
		if (array[i] > array[maxElementNumber]) {
			maxElementNumber = i;
		}
	}
	return maxElementNumber;
}