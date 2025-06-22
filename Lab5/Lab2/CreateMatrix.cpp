#include <iostream>
void CreateMatrix(int32_t** mtr, int32_t order ) {
	mtr = new int32_t * [order];
	for (size_t i{}; i < order; ++i) {
		mtr[i] = new int32_t[order];
	}
	
}