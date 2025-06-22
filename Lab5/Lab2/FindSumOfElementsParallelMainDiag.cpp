#include <iostream>
int32_t FindSumOfElementsParallelMainDiag(int32_t** mtr, int32_t order) {
	int32_t sum{};
	for (size_t i{}; i < order; ++i) {
		for (size_t j{}; j < order; ++j) {
			if (i != j) {
				sum += mtr[i][j];
			}
		}
	}
	return sum;
}