#include <iostream>
void FillMatrixByPerson(int32_t** mtr, int32_t order) {
	std::cout << "Input " << order * order << " elements in matrix\n";
	for (size_t i{}; i < order; ++i) {
		for (size_t j{}; j < order; ++j) {
			std::cin >> mtr[i][j];
		}
	}
}