/*
    File name: 8-3.cpp 
    Description: This code prints all fibonacci numbers from 1 to 5000, and all prime numbers from the same range.
    Name: Nathan Huffman
    Date: 4/3/2025
*/

# include "FibonacciIterator.h"
# include "PrimeNumberRange.h"
# include "FibonacciRange.h"
# include <iostream>

int main() {
	std::cout << "Fibonacci: ";
	for (const auto &i : FibonacciRange{5000}){std::cout << i << ' ';}

	std::cout << "\n\n";
    PrimeNumberRange prime{5000};
	std::cout << "Prime: ";
	std::cout << prime.getCurrent() << ' ';

	while (true) {
		int n{ ++prime };
		if (n < 0)
			return true;
		std::cout << n << ' ';}

    return 0;
}