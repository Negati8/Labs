#include <iostream>
void ChooseMethod(bool& method) {
	std::cout << "Input 0 if you want to fill matrix by yourself, 1 if you want fill with random";
	std::cin >> method;
}