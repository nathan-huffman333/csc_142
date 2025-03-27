/*
    File Name: 3-2.cpp
    Description: This program allows for items in char arrays to be read and replaced using two separate functions.
    Name: Nathan Huffman
    Date: 3/27/2025
*/

# include <iostream>
# include <cstdio>

void read_from(const char *ptr, std::size_t len, const int index){
    // This function allows for certain indexes of the char arrays to be displayed.
    if (index < 0 || index > len){std::cerr << "Invalid index. Checking for index " << index << " would result in a buffer overflow error." << std::endl;}
    else {std::cout << "'" << ptr[index] << "' is in index '" << index << "' of the char array '" << ptr << "'" << std::endl;}};

void write_to(char *ptr, std::size_t len, const int index, char input){
    // This function allows for certain indexes of the char arrays to be replaced with another letter.
    if (index < 0 || index > len){std::cerr << "Invalid index. Checking for index '" << index << "' would result in a buffer overflow error." << std::endl;}
    else {ptr[index] = input;}};

int main() {
    // The lower array is created and size of the array is determined.
    char lower[] = "abc?e";
    auto lower_len = std::size(lower);

    // The upper array is created and size of the array is determined.
    char upper[] = "ABC?E";
    auto upper_len = std::size(upper);  

    read_from(lower, lower_len, 3);
    // the writeto function is called for the lower array to now contain "a b c d e"
    write_to(lower, lower_len, 3, 'd'); 
    read_from(lower, lower_len, 3);

    read_from(upper, upper_len, 3);
    // the writeto function is called for the upper array to now contain "A B C D E"
    write_to(upper, upper_len, 3, 'D'); 
    read_from(upper, upper_len, 3);

    std::cout << "lower: " << lower << '\n';
    std::cout << "upper: " << upper << '\n';
};