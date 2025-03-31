/*
    File name: SummoningAGoblin.cpp
    Description: This code allows for a goblin to be created and destroyed using a "Goblin" class.
    Name: Nathan Huffman
    Date: 3/31/2025
*/

# include <iostream>

class Goblin{
    public:
        Goblin(){std::cout << "A Goblin has been summoned!" << std::endl;}; // This is the constructor that prints a message when the goblin is created.
        ~ Goblin(){std::cout << "The Goblin has been vanquished!" << std::endl;}; // This is the destructor that prints a message when the goblin is destroyed.
};

int main(){
    Goblin goblin; // Goblin is created and at the end of the code, destroyed.
    return 0;
}