#include <iostream>
#include <ctime>
void FillintArrayWithRandom(int32_t*& array, int32_t size) {
	srand(time(0));
		int32_t leftBorder{};
		int32_t rightBorder{};
		std::cout << "Input borders of interval";
		std::cin >> leftBorder >> rightBorder;
		if (leftBorder == rightBorder) {
			throw std::invalid_argument("Invalid argument");
		}
		if (leftBorder > rightBorder) {
			std::swap (leftBorder, rightBorder);
		}
		for (size_t i{}; i < size; ++i) {
			array[i] = leftBorder + rand() % (rightBorder - leftBorder + 1);
		}

}