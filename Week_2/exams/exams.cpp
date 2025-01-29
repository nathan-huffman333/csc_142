/*
    File name: exams.cpp
    Description: This program takes three exam scores and the user's name, then calculates the average score of the three and prints all of the information.
    Name: Nathan Huffman
    Date: 1/29/2025
*/

#include <iostream>
#include <iomanip>

int main() {
    //Declare name variable and ask for the user's name.
    std::string name;
    std::cout<<"Please enter your name: ";
    std::getline(std::cin, name);

    //Declare number variables.
    int first;
    int second;
    int third;
    double average;

    //Ask the user for their scores.
    std::cout<<"Enter your first exam score: ";
    std::cin>>first;
    std::cout<<"Enter your second exam score: ";
    std::cin>>second;
    std::cout<<"Enter your third exam score: ";
    std::cin>>third;

    //Find the average.
    average = (first + second + third) / 3.0;

    //Print all information.
    std::cout<<"\n";
    std::cout<<"Hello, " + name + "."<<std::endl;
    std::cout<<"Your three scores were: " << first << "%, " << second << "%, and " << third << "%." <<std::endl;
    std::cout<<"Your average score was: " << std::fixed << std::setprecision(2) << average << "%." <<std::endl; 

    return 0;
}