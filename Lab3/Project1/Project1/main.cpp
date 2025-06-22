#include <iostream>
#include "Functions.h"
int main() {
	int32_t size{};
	int32_t sizeOfSubsequenceOfPalindroms{};
	int32_t* intArray = nullptr;
	int16_t option{};
	double* realArray = nullptr;
	int32_t* arrayForSubsequenceOfPalindroms = nullptr;
	try {
		InputSize(size);
		CreateIntArray(intArray, size);
		CreateRealArray(realArray, size);
		CreateIntArray(arrayForSubsequenceOfPalindroms, size);
		std::cout << "1 - fill array by person, 2 - fill array automaticaly(random numbers) ";
		std::cin >> option;
		if (option != 1 && option != 2) {
			throw std::invalid_argument("invalid option");
		}
		switch (option) {
		case 1:
		{
			FillintArrayByPerson(intArray, size);
			FillRealArrayByPerson(realArray, size);
			break;
		}
		case 2:
		{
			FillintArrayWithRandom(intArray, size);
			FillRealArrayWithRandom(realArray, size);
			break;
		}
		}
		std::cout<< "Product of elements with even numbers " << ÑalculateProductOfElementsWithEvenNumbers(intArray, size)<<'\n';
		
		std::cout<< "Sum of elements between first and last zero " << CalculateSumOfElementsBetweenFirstAndLastZero(intArray, size)<<'\n';

		TransmuteArray(intArray, size);
		PrintArray(intArray, size);

		std::cout << "Sum between first max and last min is " << CalculateSumBetweenFirstMaxAndLastMinElements(realArray, size)<<'\n';

		FindMaxSubsequenceOfPalindroms(intArray, size, arrayForSubsequenceOfPalindroms, sizeOfSubsequenceOfPalindroms);
		std::cout << "The max subsequence of palindroms is: ";
		PrintArray(arrayForSubsequenceOfPalindroms, sizeOfSubsequenceOfPalindroms);

		SortArrayFromLowestToHighest(realArray, size);
		std::cout << "Sorted real array: ";
		PrintArray(realArray, size);

	}
	catch (...)
	{
		std::cout << "Invalid argument";
		return 0;
	}
	DeleteArray(intArray);
	DeleteArray(realArray);
	DeleteArray(arrayForSubsequenceOfPalindroms);
}