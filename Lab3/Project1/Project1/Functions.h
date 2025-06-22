#ifndef HEADER
#define HEADER
#include <iostream>
void InputSize(int32_t&);

void CreateIntArray(int32_t*&, int32_t);

void CreateRealArray(double*&, int32_t);

void FillintArrayByPerson(int32_t*&, int32_t);

void FillintArrayWithRandom(int32_t*&, int32_t);

void FillRealArrayByPerson(double*&, int32_t);

void FillRealArrayWithRandom(double*&, int32_t);

template <typename T>
void DeleteArray(T*& array) {
	delete[] array;
}

template <typename T>
void PrintArray(T* array, int32_t size) {
	for (size_t i{}; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}

int32_t FindMaxElementNumber(double*&, int32_t);

int32_t FindMinElementNumber(double*&, int32_t);

int32_t ÑalculateProductOfElementsWithEvenNumbers(int32_t*, int32_t);

int32_t FindPositionOfFirstZero(int32_t*, int32_t);

int32_t FindPositionOfLastZero(int32_t*, int32_t);

int32_t CalculateSumOfElementsBetweenFirstAndLastZero(int32_t*, int32_t);

double CalculateSumBetweenFirstMaxAndLastMinElements(double*&, int32_t);

void TransmuteArray(int32_t*&, int32_t);

void SortArrayFromLowestToHighest(double*&, int32_t);

bool IsPalindrom(int32_t);

void FindMaxSubsequenceOfPalindroms(int32_t*&, int32_t,int32_t*&,int32_t&);

#endif 






