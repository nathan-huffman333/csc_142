/*
    File name: BookTester.cpp
    Description: This program uses the Book.h file to construct 3 books into 3 separate objects with varying information, and then neatly displays this information in "printf" format. 
    Name: Nathan Huffman
    Date: 2/19/2025
*/

# include <iostream>
# include <cstdio>
# include <string>
# include "Book.h"

int main(){
    // The three book objects are created using the class Constructor method of the Book class by using the information provided. 
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 118.30);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.05);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);

    // Using printf format and calling the getter methods of the Book class, book1, book2, and book3's information is displayed neatly and aligned with the correct column category.
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    printf("-----------------------------------------------------------------------------------------\n");

    // Messages are displayed to inform the user that the prices of each book will be changed, and then the changePrice method is called accordingly. 
    std::cout << "\nChanging price of book1 from $ " << book1.getPrice() << " to $ 119.99." << std::endl;
    std::cout << "Changing price of book2 from $ " << book2.getPrice() << " to $ 99.99." << std::endl;
    std::cout << "Changing price of book3 from $ " << book3.getPrice() << " to $ 149.99." << std::endl;
    book1.changePrice(119.99);
    book2.changePrice(99.99);
    book3.changePrice(149.99);

    // The table of information is displayed again after having changed the prices to ensure the calling of the method worked correctly.
    printf("\n-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s  $%7.2f\n", book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    printf("-----------------------------------------------------------------------------------------\n");

    return 0;
};