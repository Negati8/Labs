#include <iostream>
int32_t FindElemntInOnlyNotPositiveColumn(int32_t** mtr, int32_t order) {
	bool isNotPositive{ 1 };
	for (size_t j{}; j < order; ++j) {
		for (size_t i{}; i < order; ++i) {
			if (mtr[i][j] > 0) {
				isNotPositive = 0;
				break;
			}
		}
		if (isNotPositive == 1) {
			return mtr[1][j];
		}
		isNotPositive = 1;

	}
	throw std::invalid_argument ("Invalid argument");
}