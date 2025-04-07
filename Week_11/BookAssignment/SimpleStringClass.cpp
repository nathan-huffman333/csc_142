/*
    File name: SimpleStringClass.cpp 
    Description: This program allows for strings to be created, duplicated, and moved to print messages.
    Name: Nathan Huffman
    Date: 4/7/2025
*/

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <utility>

struct SimpleString {
    SimpleString(size_t max_size) : max_size{ max_size }, length{} { // Default constructor
        if (max_size == 0){throw std::runtime_error{ "Max size must be at least 1." };};
        buffer = new char[max_size];
        buffer[0] = 0;}

    ~SimpleString(){delete[] buffer;} // Destructor

    SimpleString(const SimpleString& other) : max_size{other.max_size}, buffer{new char[other.max_size]}, length{other.length}{ // Copy constructor
        std::strncpy(buffer, other.buffer, max_size);}

    SimpleString(SimpleString&& other) noexcept : max_size(other.max_size), buffer(other.buffer), length(other.length){ // Move constructor
        other.length = 0;
        other.buffer = nullptr;
        other.max_size = 0;}

    SimpleString& operator=(const SimpleString& other){ // Copy assignment operator 
        if (this == &other){return *this;};
        const auto new_buffer = new char[other.max_size];
        delete[] buffer;
        buffer = new_buffer;
        length = other.length;
        max_size = other.max_size;
        std::strncpy(buffer, other.buffer, max_size);
        return *this;}

    SimpleString& operator=(SimpleString&& other) noexcept { // Move assignment constructor
        if (this == &other){return *this;};
        delete[] buffer;
        buffer = other.buffer;
        length = other.length;
        max_size = other.max_size;
        other.buffer = nullptr;
        other.length = 0;
        other.max_size = 0;
        return *this;}

    void print(const char* tag) const {printf("%s: %s", tag, buffer);} // Print tag followed by C-Style array

    bool append_line(const char* x){ // appends a new line to the buffer.
        const auto x_len = strlen(x);
        if (x_len + length + 2 > max_size){return false;};
        std::strncpy(buffer + length, x, max_size - length);
        length += x_len;
        buffer[length++] = '\n';
        buffer[length] = 0;
        return true;}

    private:
        size_t max_size;
        char* buffer;
        size_t length;
};

int main(){
    try {
        SimpleString a{50};
        a.append_line("C++ is the better programming language!");
        
        SimpleString b{50};
        b.append_line("No, Java is way better!");

        a.print("a ");
        b.print("b ");
        b = a;
        a.print("a ");
        b.print("b ");}
    catch(const std::exception &e){
        std::cerr << "exception: " << e.what() << '\n';
        return 1;}
    catch(...){
        std::cerr << "unknown exception caught\n";
        return 2;}

    return 0;
};