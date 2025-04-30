#include <iostream>
#include <string>
#include <utility>

struct Product {
	std::string name;
	int price;
	int quantity;
};

int total_cost(Product item1) {
	return (item1.price * item1.quantity);
};

std::pair<std::string, int> more_expensive(Product item1, Product item2) {
	int price1 = total_cost(item1);
	int price2 = total_cost(item2); 
 
	if (price1 > price2) {
		return {item1.name, price1};
	} else if (price2 > price1) {
		return {item2.name, price2};
	} else {return {"items cost the same", price1};};
};

int main(){
	Product item1{"Computer", 2500, 1};
	Product item2{"Laptop", 1500, 1};

	auto compare = more_expensive(item1, item2);
	
	std::cout << "The " << compare.first << ", being valued at $" << compare.second << " is greater than or equal to the other item's cost." << std::endl;
	
	return 0;
} 