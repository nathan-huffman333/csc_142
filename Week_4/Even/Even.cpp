/*
    File name: Even.cpp
    Description: This program generates 1000 random numbers between 0 and 100 and then determines how many even and odd numbers where generated.
    Name: Nathan Huffman
    Date: 2/10/2025
*/

# include <iostream>

bool isEven(int num){
    if (num % 2 == 0){return true;}
    else {return false;}
}

int main(){
    srand(time(0));

    int counter = 0;
    int even = 0;
    int odd = 0;

    while (counter < 1000){
        int num = rand() % 101;
        if (isEven(num) == true){even++;}
        else {odd++;}
        counter++;}

    std::cout << "Numbers generated: " << counter << std::endl;
    std::cout << "Number of Evens: " << even << std::endl;
    std::cout << "Number of Odds: " << odd << std::endl;

    return 0;
}