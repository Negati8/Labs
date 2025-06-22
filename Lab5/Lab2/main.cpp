#include <iostream>
#include "functions.h"
int main() {
	bool method{};
	int32_t order{};
	int32_t** matrix = nullptr;
	try {
		InputOrderOfMatrix(order);
		CreateMatrix(matrix, order);
		switch (method) {
		case 0: {
			FillMatrixByPerson(matrix, order);
			break;
		}
		case 1: {
			FillMatrixWithRandom(matrix,order);
			break;
		}
			  IsOnlyNotPositiveColumnExist(matrix, order);
			  std::cout << "Max element in not positive columns is " << FindMaxElementInOnlyNotPositiveColumns(matrix, order) << '\n';
			  std::cout << "Count of negative numbers in lower right triangle of square matrix include diag is " << CalculateNumberOfNegativesInLowerRightTriangleIncludeDiag(matrix, order) << '/n';
			  std::cout << "Sum of elements parallel main diag is " << FindSumOfElementsParallelMainDiag(matrix, order) << '\n';
			  std::cout << "Number of first not negative row is " << FindNumberOfFirstNotNegativeRow(matrix, order) << '\n';

		}
	}
		catch (...)
		{
			std::cout << "Invalid argument";
			return 0;
		}
		DeleteMatrix;
		return 0;
}