#include <iostream>
#include "functions.h"
int32_t FindMaxElementInOnlyNotPositiveColumns(int32_t** mtr, int32_t order) {
	int32_t maxElement{FindElementInOnlyNotPositiveColumn(mtr,order)};
	bool isNotPositive{ 1 };
	for (size_t j{}; j < order; ++j) {
		for (size_t i{}; i < order; ++i) {
			if (mtr[i][j] > 0) {
				isNotPositive = 0;
				break;
			}
		}
		if (isNotPositive == 1) {
			for (size_t i{}; i < order; ++i) {
				if (mtr[i][j] > maxElement) {
					maxElement = mtr[i][j];
				}
			}
		}
		isNotPositive = 1;
	}
	return maxElement;
}