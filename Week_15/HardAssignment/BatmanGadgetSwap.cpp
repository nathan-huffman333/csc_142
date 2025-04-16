/*
    File name: BatmanGadgetSwap.cpp
    Description : This program demonstrates the use of the std::swap function to swap two gadgets.
    Name: Nathan Huffman
    Date: 4/15/2025
*/

# include <iostream>
# include <string>
# include <utility>

void showGadgets(std::string g1, std::string g2) {
    std::cout << "Gadget 1: " << g1 << ", Gadget 2: " << g2 << "\n";
}

int main() {
    std::string gadget1 = "Bat-a-rang";
    std::string gadget2 = "Grappling Hook";

    showGadgets(gadget1, gadget2);
    std::swap(gadget1, gadget2);
    showGadgets(gadget1, gadget2);

    return 0;
}