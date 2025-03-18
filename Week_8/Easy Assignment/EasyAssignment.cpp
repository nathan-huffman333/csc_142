/*
    File name: EasyAssignment.cpp
    Description: This code takes a user name and their age, and then returns roughly their age in days.
    Name: Nathan Huffman
    Date: 3/18/2025
*/

# include <iostream>

int main(){
    // The user is asked their name and the variable for it is declared.
    std::string name;
    std::cout << "\nEnter your name: ";
    std::getline(std::cin, name);
   
    // The user is asked their age and the variable for it is declared.
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // A while loop is used to ensure the age variable is an int and not 0 or less.
    bool repeat = true;
    while (repeat == true){
        if (age < 1 || std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(123, '\n');
            std::cout << "ERROR. Value inputted was not a valid number. Enter your age: ";
            std::cin >> age;
        } else {repeat = false;};};

    // The number of days in a year is multiplied by the user's age and made into a variable.
    float days = 365.25f;
    float ageInDays = age * days;

    // The final message displaying the user's name and age in days is displayed.
    std::cout << "\nHello" << name << " you are: " << ageInDays << " days old." << std::endl;

    return 0;
};