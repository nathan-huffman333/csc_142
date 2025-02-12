/*
    File name: PrimeFactorial.cpp
    Description: This code, at the user's behest, repeatedly determines if a randomly generated number from 0 to 50 is prime. If so, the number's factorial is calculated and displayed. 
    Name: Nathan Huffman
    Date: 2/12/2025 
*/

# include <iostream>
# include <iomanip>
# include <ctime>

// This method determines if the generated number is prime or not and returns the appropriate boolean.
bool isPrime(int generated_num){
    if (generated_num <= 1) return false;
    for (int factors = 2; factors <= generated_num / 2; factors++) {
        if (generated_num % factors == 0) return false;
    }
    return true;
}

// This method determines and returns the factorial of the number it is provided.
double factorial(int generated_num){
    double prime_factorial = 1;
    for (int i = 1; i <= generated_num; i++) {
        prime_factorial *= i;}
    return prime_factorial;
}

int main(){
    srand(time(0));

    // These variables are defined to create a continuous loop.
    bool repeat = true;
    std::string confirmation;
    
    while(repeat){
        // A random number between 0 and 50 is generated and displayed.
        int generated_num = rand() % 51;
        std::cout<<"\nThe number is: " << generated_num << std::endl;

        // The method to determine if the number is prime is called within an if statement, and depending on its return value, has two possible reactions.
        if (isPrime(generated_num)== true){
            // When the number is prime that information is printed. Afterwards, the method to calculate the factorial of the number is called and also printed.
            std::cout<<"That number is: PRIME" << std::endl;
            std::cout<<"The factorial of that number is: " << factorial(generated_num)<< std::endl;}
        else{
            // If the number is not prime, then a message stating that information is simply printed.
            std::cout<<"That number is: NOT PRIME" << std::endl;}

        // The user is asked if they wish to continue the loop and generate another number, and the program acts accordingly based on their response. 
        do {std::cout << "\nWould you like to generate another number?: (Y/N) ";
            std::getline(std::cin, confirmation); 
            if (confirmation == "n" || confirmation == "N") {
                repeat = false;
                std::cout<<"\nOkay then. Goodbye!\n" << std::endl;
                break;}
            else if (confirmation == "y" || confirmation == "Y") {break;}
            else {std::cout << "Invalid input. Please enter 'Y' for yes or 'N' for no.\n";}
        } while(true);

    }
    return 0;
}