#include <iostream>
inline int32_t FindPositionOfFirstZero(int32_t* array, int32_t size) {
	for (size_t i{}; i < size; ++i) {
		if (array[i] == 0) {
			return i+1;
		}
	}
	return 0;
}