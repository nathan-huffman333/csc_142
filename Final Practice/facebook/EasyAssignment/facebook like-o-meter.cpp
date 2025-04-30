# include <iostream>

int main(){
	int target;
	int counter;
	std::cout << "What is the target number of likes? ";
	std::cin >> target;
	
	for (int counter = 1; counter <= target; counter++){ 
		std::cout << "Current likes: " << counter << std::endl;
		if (counter%10 == 0){
			std::cout << "Wow, this post is getting popular, it has " << counter << " likes!" << std::endl;
		};	
	};
	return 0;
}