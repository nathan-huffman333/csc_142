/*
    File name: LaunchCountdown.cpp
    Description: This program counts down from 10 for a rocket to launch.
    Name: Nathan Huffman
    Date: 4/7/2025
*/

# include <iostream>

int main(){
    std::cout << "Countdown to launch sequence:" << std::endl; // A message prints to declare that the countdown will start. 
    for (int i = 10; i > 0; i--){
        std::cout << i << "..." << std::endl;}; // A for loop prints backwards from 10.
    std::cout << "LIFTOFF!" << std::endl; // The liftoff message is printed.
    return 0;
}