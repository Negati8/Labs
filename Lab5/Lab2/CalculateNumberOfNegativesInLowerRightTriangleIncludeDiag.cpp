#include <iostream>
int32_t CalculateNumberOfNegativesInLowerRightTriangleIncludeDiag(int32_t** mtr, int32_t order) {
	int32_t numberOfNegatives{};
	for (size_t i{}; i < order; ++i) {
		for (size_t j{}; j < order; ++j) {
			if (j >= order - i) {
				if (mtr[i][j] < 0) {
					numberOfNegatives += 1;
				}
			}
		}
	}
	return numberOfNegatives;
}

//1 2 3     if(j >= order - i)
//4 5 6
//7 8 9