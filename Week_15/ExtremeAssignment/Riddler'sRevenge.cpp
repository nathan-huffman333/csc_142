/*
    File name: Riddler'sRevenge.cpp
    Description: This program demonstrates the use of std::tuple to return multiple values from a function.
    Name: Nathan Huffman
    Date: 4/15/2025
*/

# include <iostream>
# include <tuple>
# include <string>

std::tuple<int, std::string, bool> getRiddleInfo() {
    return std::make_tuple(7, "What has roots as nobody sees, is taller than trees...", true);
}

int main() {
    int riddleNumber;
    std::string riddleText;
    bool solved;

    std::tie(riddleNumber, riddleText, solved) = getRiddleInfo();

    std::cout << "Riddle #" << riddleNumber << ": \"" << riddleText << "\"\n";
    std::cout << "Solved: " << (solved ? "Yes" : "No") << "\n";

    return 0;
}