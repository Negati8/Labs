#include <iostream>
inline bool IsPalindrom(int32_t number) {
	int32_t copyNumber{ number };
	int32_t reversedNumber{};
	while (copyNumber){
		reversedNumber = reversedNumber * 10 + copyNumber % 10;
		copyNumber /= 10;
	}
	return reversedNumber == number;
}