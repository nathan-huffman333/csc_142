/*
    File name: StarWars.cpp
    Description: This program simulates a countdown to lightspeed in the Star Wars universe.
    Name: Nathan Huffman
    Date: 4/14/2025
*/

# include <iostream>
using namespace std;

void countdown_to_lightspeed(int seconds){ // This function takes "seconds" as an argument and in a for loop counts down from that number to 0, printing a message each second.
    for (int i = seconds; i >= 0; --i) {
        cout << "Jumping in " << i << "..." << endl; // The message and number is printed to the console, counting down.
    };
};

int main() {
    countdown_to_lightspeed(5); // Call the countdown_to_lightspeed function with 5 seconds as the argument.
    cout << "Punch it, Chewie!\n";
    return 0;
}