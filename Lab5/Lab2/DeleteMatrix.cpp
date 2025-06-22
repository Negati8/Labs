#include <iostream>
void DeleteMatrix(int32_t** mtr, int32_t order) {
	for (size_t i{}; i < order; ++i) {
		delete[] mtr[i];
	}
	delete[] mtr;
	}