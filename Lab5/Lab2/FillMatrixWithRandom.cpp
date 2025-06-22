#include <iostream>
#include <ctime>
void FillMatrixWithRandom(int32_t** mtr, int32_t order) {
		srand(time(0));
		int32_t leftBorder{};
		int32_t rightBorder{};
		std::cout << "Input borders of interval";
		std::cin >> leftBorder >> rightBorder;
		if (leftBorder == rightBorder) {
			throw std::invalid_argument("Invalid argument");
		}
		if (leftBorder > rightBorder) {
			std::swap(leftBorder, rightBorder);
		}
		for (size_t i{}; i < order; ++i) {
			for (size_t j{}; j < order; ++j) {
				mtr[i][j] = leftBorder + rand() % (rightBorder - leftBorder + 1);
			}
		}
	}