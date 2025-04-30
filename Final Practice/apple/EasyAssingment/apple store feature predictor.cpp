#include <iostream>

int main(){
	int numOfApps;
	int numOfQualApps = 0;	

	std::cout << "Number or apps to check: ";
	std::cin >> numOfApps;
	
	for (int i = 0; i < numOfApps; i++){
		int downloads;
		std::cout << "\nDownloads: ";
		std::cin >> downloads;
		
		int stars;
		std::cout << "Stars: ";
		std::cin >> stars;
		
		if (downloads >= 100000 && stars >= 4){
			numOfQualApps += 1;
		};
	};

	std::cout << "\nNumber of Quality Apps: " << numOfQualApps << std::endl;
	
	return 0;
}	