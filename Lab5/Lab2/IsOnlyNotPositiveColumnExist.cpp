#include <iostream>
bool IsOnlyNotPositiveColumnExist(int32_t** mtr, int32_t order) {
	bool isColumnNotPositive{ 1 };
	for (size_t j{}; j < order; ++j) {
		for (size_t i{}; i < order; ++i) {
			if (mtr[i][j] > 0) {
				isColumnNotPositive = 0;
				break;
			}
		}
		if (isColumnNotPositive == 1) {
			return 1;
		}
	}
	return 0;
}
