#include <iostream>
#include <ctime>
void FillRealArrayWithRandom(double*& array, int32_t size) {
	srand(time(0));
	double leftBorder{};
	double rightBorder{};
	std::cout << "Input borders of interval";
	std::cin >> leftBorder >> rightBorder;
	if (leftBorder == rightBorder) {
		throw std::invalid_argument("Invalid argument");
	}
	if (leftBorder > rightBorder) {
		std::swap(leftBorder, rightBorder);
	}
	for (size_t i{}; i < size; ++i) {
		array[i] = leftBorder + (static_cast<double>(rand())/RAND_MAX)*(rightBorder-leftBorder);
	}

}