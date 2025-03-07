/*
    File name: InventoryTester.cpp
    Description: This program creates and displays an array of books with different information, and ensures that copies are not added.
    Name: Nathan Huffman
    Date: 3/6/2025


Extra Credit Opportunity:
    The 10-digit version of the International Standard Book Number code is a redundant,
    error-detecting code consisting of a unique, 9-digit book code followed by a check digit—
    the last digit of the ten-digit code. The ISBN-10 specification has a very specific
    algorithm for the check digit. If an ISBN code is inadvertently mistyped or otherwise
    incorrect the algorithm’s check digit will not match the one provided. If the provided
    check digit is different from the calculated check digit, the ISBN code is not valid. This
    check digit technique will identify many (but not all) such errors.
    The algorithm is explained well in Wikipedia: https://en.wikipedia.org/wiki/ISBN#Check_digits


    For up to (+10) points extra credit, add a new method to your Book class:

        (*HINT: You'll want to use type casting so that you can convert a character like '5' to an
        actual int value of 5)
        (**HINT: When casting a character to an int, you will receive the ASCII value of that character
        and not the value you expect. Look below and find the ASCII values of each number key)
                                      https://www.ascii-code.com/
        (Can you come up with a clever way to translate a number key's ASCII value to its integer value?)

        + isValidISBN() : boolean
        Input: This method takes no arguments.
        Return: This method will return a Boolean indicating whether a Book object’s
        ISBN is valid. If there is an error in the ISBN String the check digit will not match
        and the method will return false. If the check digit is confirmed as correct the
        method will return true.

        Modify your operator<<() overload in your Book class to check the ISBN String. If the
        string is invalid, mark it in the output by adding an asterisk ('*') immediately after the
        ISBN in the string.
        There is at least one incorrect ISBN numbers in the data for this lab. Can you tell which?
        For the full extra credit, do this in a way that the output columns are still neatly aligned:
        (* You can use the .append() method for a std::string to place a character at the end of the string *)
        ------------------------------------------------------------------------------------------
        ISBN         AUTHOR          TITLE                                       ED  PUB     PRICE
        0134802217   Tony Gaddis     Starting Out With Java: From Control Str     7   PE  $ 188.95
        0321173486*  Shreiner        OpenGL Programming Guide                     5   AW  $  24.00
        ------------------------------------------------------------------------------------------

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