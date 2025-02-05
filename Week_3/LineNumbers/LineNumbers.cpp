/*
    File name: LineNumbers.cpp
    Description: This program uses whatever file the user specifies and then reads, numbers, and prints all of the lines in the file to another created and named by the user.
    Name: Nathan Huffman
    Date: 2/5/2025
*/

#include <iostream>
#include <fstream>
#include <string>

int main(){
    //Declares the file names as two variables
    std::string input_file_name;
    std::string output_file_name;

    //Asks the user for the name of the file that contains the text.
    std::cout << "Please enter the name of the input file: ";
    std::getline(std::cin, input_file_name);
    
    //Opens the file with the name that the user specified.
    std::ifstream inFile;
    inFile.open(input_file_name);

    //Asks the user for the name they'd like the output file to be.
    std::cout << "Please enter the name of the output file: ";
    std::getline(std::cin, output_file_name);
    
    //Creates the output file with the name the user specified. 
    std::ofstream outFile;
	outFile.open(output_file_name);

    //Creates a variable for the line and for the line number.
    int line_number = 1;
    std::string line;
    
    //So long as the line is able to be read, the line number and text of the line is printed to the output.
    while (std::getline(inFile, line)){
        outFile << line_number << ". " << line << "\n";
        line_number++;
    }

    //Closes both files.
    inFile.close();
    outFile.close();

    return 0;
}