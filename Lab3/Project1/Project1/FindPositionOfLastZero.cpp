#include <iostream>
inline int32_t FindPositionOfLastZero(int32_t* array, int32_t size) {
	for (int32_t i{size}; i != 0; --i) {
		if (array[i] == 0) {
			return i ;
		}
	}
	return 0;
}