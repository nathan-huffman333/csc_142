/*
    File name: RectangleTester.cpp
    Description: This code creates three instances of the "Rectangle" class, assigns values to the instance, then determines the area of the rectangle.
    Name: Nathan Huffman
    Date: 2/17/2025
*/

# include <iostream>
# include "Rectangle.h"


int main(){
    // For convenience, the names of the rooms are made into variables to be used in sentences.
    std::string room1 = "kitchen";
    std::string room2 = "bedroom";
    std::string room3 = "living room";
    
    // The length and width the user inputs are declared.
    double userLength = 0;
    double userWidth = 0;

    // The first instance of the class is created for the kitchen.
    Rectangle Kitchen;
    // The user inputs the length and width of the kitchen.
    std::cout << "\nWhat is the length of the " << room1 << "?: ";
    std::cin >> userLength;
    std::cout << "What is the width of the " << room1 << "?: ";
    std::cin >> userWidth;
    // These dimensions are sent to the corresponding "Kitchen" instance of the Rectangle class.
    Kitchen.setLength(userLength);
    Kitchen.setWidth(userWidth);

    // The second instance of the class is created for the bedroom
    Rectangle BedRoom;
    // The user inputs the length and width of the bedroom.
    std::cout << "What is the length of the " << room2 << "?: ";
    std::cin >> userLength;
    std::cout << "What is the width of the " << room2 << "?: ";
    std::cin >> userWidth;
    // These dimensions are sent to the corresponding "BedRoom" instance of the Rectangle class.
    BedRoom.setLength(userLength);
    BedRoom.setWidth(userWidth);

    // The third instance of the class is created for the living room.
    Rectangle LivingRoom;
    // The user inputs the length and width of the living room.
    std::cout << "What is the length of the " << room3 << "?: ";
    std::cin >> userLength;
    std::cout << "What is the width of the " << room3 << "?: ";
    std::cin >> userWidth;
    // These dimensions are sent to the corresponding "LivingRoom" instance of the Rectangle class.
    LivingRoom.setLength(userLength);
    LivingRoom.setWidth(userWidth);

    // A summary of all of the information given for the corresponding room is portrayed along with the area.
    std::cout << "\nThe " << room1 << " is " << Kitchen.getLength() << " x " << Kitchen.getWidth() << ", with and area of " << Kitchen.getArea() << " sq ft." << std::endl;
    std::cout << "The " << room2 << " is " << BedRoom.getLength() << " x " << BedRoom.getWidth() << ", with and area of " << BedRoom.getArea() << " sq ft." << std::endl;
    std::cout << "The " << room3 << " is " << LivingRoom.getLength() << " x " << LivingRoom.getWidth() << ", with and area of " << LivingRoom.getArea() << " sq ft." << std::endl;

    // The total area of all of the rooms is added together and displayed.
    std::cout << "\nThe total area of all of the rooms combined is: " << (Kitchen.getArea() + BedRoom.getArea() + LivingRoom.getArea()) << " sq ft.\n" << std::endl;
    
    return 0;
}