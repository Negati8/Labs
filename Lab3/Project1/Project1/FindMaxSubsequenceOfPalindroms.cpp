#include <iostream>
#include "IsPalindrom.cpp"
void FindMaxSubsequenceOfPalindroms(int32_t*& array, int32_t size, int32_t*& arrayOfSubsequenceOfPalindroms,int32_t& sizeOfSubsequenceOfPalindroms) {
	size_t j{};
	for (size_t i{}; i < size; ++i) {
		if (IsPalindrom(array[i])) {
			arrayOfSubsequenceOfPalindroms[j] = array[i];
			++j;
		}
	}
	sizeOfSubsequenceOfPalindroms = j;
}