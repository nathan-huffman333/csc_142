/*
    File name: InventoyrTester.cpp
    Description: Adds several books to an array, displays there information, and allows for the possibility to change the prices of the books.
    Name: Nathan Huffman
    Date: 2/27/2025
*/

# include <iostream>
# include <cstdio>
# include "Inventory.h"
# include "Book.h"


int main(){
    // The inventory is created with 10 possible slots for books.
    Inventory Inventory(10);

    // Six book objects are created using the information specified.
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 118.30);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.05);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    // Each book is added to the array and prints a message whether it does so successfully or unsuccessfully. 
    if (Inventory.addBook(book1)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};
    if (Inventory.addBook(book2)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};
    if (Inventory.addBook(book3)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};
    if (Inventory.addBook(book4)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};
    if (Inventory.addBook(book5)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};
    if (Inventory.addBook(book6)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << "Book could not be added to array." << std::endl;};

    // The inventory is displayed by calling the printInventory method.
    Inventory.printInventory();

    // The prices of three books are changed by calling the changePrice method.
    Inventory.changePrice("013478796X", 50.00);
    Inventory.changePrice("0143067889", 9.95);
    Inventory.changePrice("0134743350", 100.00);

    // The inventory is displayed one final time.
    Inventory.printInventory();

    return 0;
};