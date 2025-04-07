/*
    File name: GalacticCoordinatesCalculator.cpp
    Description: This code allows for movement in space by changing coordinates depending on the angle, warp factor, and thrust speed. 
    Name: Nathan Huffman
    Date: 4/7/2025
*/

# include <iostream>
# include <cmath>

constexpr double pi = 3.14159265358979323846; // This is pi, which is used for the math of converting into radians.

double degrees_to_radians(double degrees){ // This function converts degrees into radians.
    return degrees * (pi / 180.0);
}

int main(){
    double z;
    double y;
    double x;
    double thrust;
    double angle;
    double warp_factor;

    // The user is asked for the initial x, y, and z coordinates.
    std::cout << "Enter the initial coordinates:" << std::endl;
    std::cout << "\tX Coordinate: ";
    std::cin >> x;
    std::cout << "\tY Coordinate: ";
    std::cin >> y;
    std::cout << "\tZ Coordinate: ";
    std::cin >> z;

    // The user is asked for the thrust.
    std::cout << "\nThrust: ";
    std::cin >> thrust;

    // The user is asked for the angle.
    std::cout << "Angle: ";
    std::cin >> angle;
    angle = degrees_to_radians(angle);

    // The user is asked for the warp factor.
    std::cout << "Warp Factor: ";
    std::cin >> warp_factor;

    // The new coordinates are declared and calculated.
    double new_x = (x + thrust * cos(angle)) * warp_factor;
    double new_y = (y + thrust * sin(angle)) * warp_factor;
    double new_z = z + (thrust / warp_factor);

    // The new coordinates are printed.
    std::cout << "\nYour new coordinates are:" << std::endl;
    std::cout << "\tX: " << new_x << std::endl;
    std::cout << "\tY: " << new_y << std::endl;
    std::cout << "\tZ: " << new_z << std::endl;

    return 0;
}