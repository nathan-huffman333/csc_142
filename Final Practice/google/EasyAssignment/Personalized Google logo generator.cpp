#include <iostream>

int main() {
	int popularity;
	std::cout << "Popularity rating (1 to 10): ";
	std::cin >> popularity; 
	
	while (popularity <= 0 || popularity > 10) {
		std::cout << "\nInvalid input, please enter a rating from 1 to 10." << std::endl;
		std::cout << "Popularity rating (1 to 10): ";
		std::cin >> popularity; 
	};

	if (popularity <= 3 && popularity >= 1) {
		std::cout << "\nGoogle" << std::endl;
	} else if (popularity >= 4 && popularity <= 7) {
		std::cout << "\nGoooogle" << std::endl;
	} else {
		std::cout << "\nGoooooogle" << std::endl;
	};
	
	return 0;
}