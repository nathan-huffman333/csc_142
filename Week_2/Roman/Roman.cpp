/*
    File name: Roman.cpp
    Description: This program converts the users number from one to ten to the roman numeral equivalent.
    Name: Nathan Huffman
    Date: 1/30/2025
*/

#include <iostream>

int main() {
    int num;

    do {
		std::cout<<"Enter a number between 1 and 10: ";
        std::cin>>num;
        if (num < 1 || num > 10)
            std::cout<<"That number is invalid. Please try again.\n";
	} while(num < 1 || num > 10);    


    if (num == 1)
        std::cout << "Roman Numeral: I" << std::endl;
    else if (num == 2)
        std::cout << "Roman Numeral: II" << std::endl;
    else if (num == 3)
        std::cout << "Roman Numeral: III" << std::endl;
    else if (num == 4)
        std::cout << "Roman Numeral: IV" << std::endl;
    else if (num == 5)
        std::cout << "Roman Numeral: V" << std::endl;
    else if (num == 6)
        std::cout << "Roman Numeral: VI" << std::endl;
    else if (num == 7)
        std::cout << "Roman Numeral: VII" << std::endl;
    else if (num == 8)
        std::cout << "Roman Numeral: VIII" << std::endl;
    else if (num == 9)
        std::cout << "Roman Numeral: IX" << std::endl;
    else if (num == 10)
        std::cout << "Roman Numeral: X" << std::endl;

}
