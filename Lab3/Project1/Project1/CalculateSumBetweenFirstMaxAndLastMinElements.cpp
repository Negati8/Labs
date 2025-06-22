#include <iostream>
#include "FindMinElementNumber.cpp"
#include "FindMaxElementNumber.cpp"
double CalculateSumBetweenFirstMaxAndLastMinElements(double*& array, int32_t size) {
	double sumBetweenFirstMaxAndLastMinElements{};
	int32_t leftBorder{ FindMinElementNumber(array,size) };
	int32_t rightBorder{ FindMaxElementNumber(array,size) };
	if (leftBorder > rightBorder) {
		std::swap(leftBorder, rightBorder);
	}
	for (int32_t i{ leftBorder }; i <= rightBorder; ++i) {
		sumBetweenFirstMaxAndLastMinElements += array[i];
	}
	return sumBetweenFirstMaxAndLastMinElements;
}