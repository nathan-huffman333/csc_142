/*
    File name: Tax.cpp
    Description: This program gets the inital price of a purchase from the user, then calculates the tax, total purchase amount, and then displays the results.
    Name: Nathan Huffman
    Date: 2/5/2025
*/


#include <iostream>
#include <iomanip>

int main() {
    //Declare variables outside of the loop.
    std::string description;
    const double TAX = 0.06;
    bool keepGoing = true;
    std::string noTaxString;
    double noTax = 0;
    std::string confirmation;

    //Create a loop for the user to enter their information and find out the final price of their purchase including tax.
    while(keepGoing == true){
        std::cout << "\nPlease enter a description of the purchase: ";
        std::getline(std::cin, description);

        do {
            std::cout << "Please enter the initial price of the purchase: ";
            std::getline(std::cin, noTaxString);
            noTax = std::stod(noTaxString);
	    } while(noTax <= 0);

        //Display all of the information after doing the math.
        double tax = noTax * TAX;
        double total = noTax + tax;
        std::cout << "\nDescription of the purchase: " << description << std::endl;
        std::cout << "Initial price: $" << noTax << std::endl;
        std::cout << "Tax: $" << std::fixed << std::setprecision(2) << tax << std::endl;
        std::cout << "Final price: $" << std::fixed << std::setprecision(2) << total << std::endl;
        
        //Ask the user if they wish to continue, terminate the loop if they respond with no, repeat it if they say yes, and ask them again if they say neither.
        do {
            std::cout << "\nWould you like to make another purchase?: (Y/N) ";
            std::getline(std::cin, confirmation); 
            if (confirmation == "n" || confirmation == "N") {
                keepGoing = false;
                break;
            } else if (confirmation == "y" || confirmation == "Y") {
                keepGoing = true;
                break;
            } else {
                std::cout << "Invalid input. Please enter 'Y' for yes or 'N' for no.\n";
            }
        } while(true);
    }
    
        
    return 0;
}