#include <iostream>
int32_t FindNumberOfFirstNotNegativeRow(int32_t** mtr, int32_t order) {
	bool isNotNegative{1};
	int32_t numberOfRow{};
	for (size_t i{}; i < order; ++i) {
		for (size_t j{}; j < order; ++j) {
			if (mtr[i][j] < 0) {
				isNotNegative = 0;
				break;
				
			}
		}
		if (isNotNegative == 1) {
			numberOfRow = i+1;
			break;
		}
		isNotNegative = 1;
	}
	return numberOfRow;
}