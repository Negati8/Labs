#include <iostream>
void TransmuteArray(int32_t*& array, int32_t size) {
	int32_t pos{};
	int32_t temp{};
	for (int32_t i{}; i < size; ++i) {
		if (array[i]<0) {
			 temp = array[i];
			for (int32_t j{ i }; j > pos; --j) {
				array[j] = array[j - 1];
			}
			array[pos] = temp;
			++pos;
		}
	}
}