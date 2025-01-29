/*
    File name: SpeedTrap.cpp
    Description: This program uses conditional statements to check to see if a user is speeding based of the speed that they input.  
    Name: Nathan Huffman
    Date: 1/29/2025
*/

#include <iostream>

int main() {
    int speed_limit;
    double current_speed;

    std::cout<<"Enter the speed limit: ";
    std::cin>>speed_limit;
    std::cout<<"Enter your current speed: ";
    std::cin>>current_speed;

    if (current_speed > speed_limit)
        std::cout << "You are speeding, you are getting a speed ticket." << std::endl;
    else
        std::cout << "Your speed is legal, and you will not receive a ticket." << std::endl;
    
    return 0;
}