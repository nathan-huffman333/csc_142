/*
    File name: Bat-SignalPair.cpp
    Description: This program demonstrates the use of std::pair to store and display a pair of strings.
    Name: Nathan Huffman
    Date: 4/15/2025
*/

# include <iostream>
# include <utility>

int main(){
    std::pair<std::string, std::string> alert{"Joker", "Arkham Asylum"};
    std::cout << alert.first << " spotted at " << alert.second << "!\n";
    return 0;
}
