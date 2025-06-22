#include <iostream>
#include "FindPositionOfFirstZero.cpp"
#include "FindPositionOfLastZero.cpp" 

int32_t CalculateSumOfElementsBetweenFirstAndLastZero(int32_t* array, int32_t size) {
	int32_t sumOfElementsBetweenFirstAndLastZero{};
	int32_t positionOfFirstZero{ FindPositionOfFirstZero(array,size) };
	int32_t positionOfLastZero{ FindPositionOfLastZero(array,size) };
	if (positionOfFirstZero == 0) {
		throw "No zeros";
	}
	if (positionOfFirstZero == positionOfLastZero) {
		throw "Only 1 zero";
	}
	for (int32_t i{ positionOfFirstZero }; i <= positionOfLastZero;++i)
	{
		sumOfElementsBetweenFirstAndLastZero += array[i];
	}
	return sumOfElementsBetweenFirstAndLastZero;
}
