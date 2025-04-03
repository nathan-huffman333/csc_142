/*
    File name: 8-1.cpp 
    Description: This code prints all fibonacci numbers from 1 to 5000.
    Name: Nathan Huffman
    Date: 4/3/2025
*/

#include "PrimeNumberRange.h"
#include "FibonacciIterator.h"
#include "FibonacciRange.h"
#include <cstdio>

int main() {
	FibonacciRange range{5000};
	const auto end = range.end();
	for (auto x = range.begin(); x != end; ++x) {
		const auto i = *x;
		printf("%d ", i);}

	return 0;
}