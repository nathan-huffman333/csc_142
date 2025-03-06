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
            for (int i = 0; i < length; i++){
                if (books[i].getISBN() == theBook.getISBN()){return false;};};
            if (nextEntry < (length)){
                books[nextEntry] = theBook;
                nextEntry ++;
                return(true);}
            else {return false;};};

        // This method allows for the price of a book to change determined by the ISBN code provided.
        void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < length; i++){
                if (books[i].getISBN() == isbn){
                    std::cout << "Changing the price of " << isbn << " to $ " << newPrice << std::endl;
                    books[i].changePrice(newPrice);
                    break;};};};

        // This method prints the inventory of the array in an aligned format using printf.  
        void printInventory(){
            for (int i = 0; i < length; i++){
                std::cout << books[i] << std::endl;
            };             
};
};