/*
    File name: InventoryTester.cpp
    Description: This program creates and displays an array of books with different information, and ensures that copies are not added.
    Name: Nathan Huffman
    Date: 3/6/2025
*/

# include <iostream>
# include <cstdio>
# include "Inventory.h"
# include "Book.h"
# include <string>


int main(){
    // The inventory is created with 20 possible slots for books.
    Inventory Inventory(20);

    // Twelve book objects are created using the information specified.
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 118.30);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.05);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);
    Book book7 = Book("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95);
    Book book8 = Book("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95);
    Book book9 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38);
    Book book10 = Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38);
    Book book11 = Book("0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95);
    Book book12 = Book("0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50);

    // Each book is added to the array and prints a message whether it does so successfully or unsuccessfully. 
    if (Inventory.addBook(book1)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book1.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book2)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book2.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book3)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book3.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book4)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book4.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book5)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book5.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book6)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book6.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book7)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book7.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book8)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book8.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book9)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book9.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book10)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book10.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book11)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book11.getTitle() << " could not be added to array." << std::endl;};
    if (Inventory.addBook(book12)){std::cout << "Book successfully added to array." << std::endl;}
    else {std::cout << book12.getTitle() << " could not be added to array." << std::endl;};

    // The inventory is displayed by calling the printInventory method. 
    printf("\n-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    Inventory.printInventory();
    printf("-----------------------------------------------------------------------------------------\n\n");

    // The prices of three books are changed by calling the changePrice method.
    Inventory.changePrice("013478796X", 50.00);
    Inventory.changePrice("0143067889", 9.95);
    Inventory.changePrice("0134743350", 100.00);

    // The inventory is displayed one final time.
    printf("\n-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    Inventory.printInventory();
    printf("-----------------------------------------------------------------------------------------\n");

    return 0;
};