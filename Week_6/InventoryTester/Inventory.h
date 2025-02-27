# pragma once
# include <iostream>
# include "Book.h"
# include <string>
# include <cstdio>

class Inventory{
    private:
        // All of the private variables are declared, including the pointer, the length of the array, and the nextEntry variable.
        Book* books;
        int nextEntry;
        int length;
    
    public:
        // A Constructor method is created to allow for the assignment of the length of the array and the array itself.
        Inventory(int size){
            length = size;
            books = new Book[length];
            nextEntry = 0;};
        
        // The array is deleted for proper memory management.
        ~Inventory() {delete[] books;}

        // A book is added to the "books" array and returns true if successful.
        bool addBook(Book theBook){
            if (nextEntry < (length)){
                books[nextEntry] = theBook;
                nextEntry ++;
                return(true);}
            else {return(false);};};

        // This method allows for the price of a book to change determined by the ISBN code provided.
        void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < length; i++){
                if (books[i].getISBN() == isbn){
                    books[i].changePrice(newPrice);
                    break;};};};

        // This method prints the inventory of the array in an aligned format using printf.  
        void printInventory(){    
            printf("-----------------------------------------------------------------------------------------\n");
            printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
            for (int i = 0; i < nextEntry; i++){
                printf("%-11s %-15.13s %-43.39s %2i  %3s  $%7.2f\n", books[i].getISBN().c_str(), books[i].getAuthor().c_str(), books[i].getTitle().c_str(), books[i].getEdition(), books[i].getPubCode().c_str(), books[i].getPrice());};
            printf("-----------------------------------------------------------------------------------------\n");};
};