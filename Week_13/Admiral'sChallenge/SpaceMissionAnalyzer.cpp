/*
    File name: SpaceMissionAnalyzer.cpp 
    Description: This program takes in numbers revolving the spaceship's expedition and determines if it is possible.
    Name: Nathan Huffman
    Date: 4/7/2025
*/

# include <iostream>
#include <cmath>
# include <iomanip>

int main(){
    // The variables that the user will input are declared.
    double distance;
    double fuel;
    int crew;
    double weight;
    double life_support;

    std::cout << "Distance to planet (million km): ";
    std::cin >> distance; // The user inputs the distance.
    std::cout << "Available fuel (tons): ";
    std::cin >> fuel; // The user inputs the amount of fuel.
    std::cout << "Crew size: ";
    std::cin >> crew; // The user inputs the size of the crew.
    std::cout << "Weight of the spaceship (tons): ";
    std::cin >> weight; // The user inputs the weight of the spaceship.
    std::cout << "Life support duration (days): ";
    std::cin >> life_support; // The user inputs the number of days the crew can last on life support.

    double efficiency = (fuel / weight) * 100; // The fuel efficiency is calculated.
    double speed = (fuel * 10000) / (crew * weight); // The speed of the spaceship is calculated.
    double time = (distance * 1000000) / speed; // The length of time the trip will take is calculated.
    int travel_days = static_cast<int>(std::ceil(time)); // The length of time is converted into an int.

    bool mission_viable = false; // The possibility of success is declared as a variable.
    // The mission will only succeed if all of these conditions are met:
    if (efficiency >= 20.0 && life_support >= (time + 10) && crew >= 2 && crew <= 8 && weight < 500){mission_viable = true;};

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel Efficiency: " << efficiency << " %" << std::endl; // The fuel efficiency is printed.
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Estimated Speed : " << speed << " km/day" << std::endl; // The speed is printed.
    std::cout << "Travel Time: " << travel_days << std::setprecision(2) << " days" << std::endl; // The time of the trip is printed.

    // The mission status is displayed as "viable" or "not viable."
    std::cout << "\nMission status: ";
    if (mission_viable == true){
        std::cout << "VIABLE" << std::endl;}
    else {std::cout << "NOT VIABLE" << std::endl;};

    return 0;
}