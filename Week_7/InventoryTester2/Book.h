# pragma once
# include <string>
# include <iostream>

class Book{
    private:
        // All of the private variables making up the characteristics of the object are declared.
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        // A Constructor method is created to allow for the assignment of values to the object's characteristics in bulk.
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        };

        // A zero-argument Construtor is created to assign default values to the variables for the array.
        Book(){
            codeNum = "";
            author = "";
            title = "";
            edition = 0;
            pubCode = "";
            price = 0;
        };

        // These getter methods return the title, author, price, edition, codeNum, or pubCode when called accordingly.
        std::string getTitle(){return title;};
        std::string getAuthor(){return author;};
        double getPrice(){return price;};
        int getEdition(){return edition;};
        std::string getISBN(){return codeNum;};
        std::string getPubCode(){return pubCode;};

        // This setter method allows for the price of the book to be changed.
        void changePrice(double newPrice){price = newPrice;};

    // The friend overload is created to add all of the information about the book formatted correctly to the array.
    friend std::ostream& operator<<(std::ostream& output, Book book){
        char c_text[100];
        std::string text = c_text;
        sprintf(c_text, "%-11s %-15.13s %-43.39s %2i  %3s  $%7.2f", book.getISBN().c_str(), book.getAuthor().c_str(), book.getTitle().c_str(), book.getEdition(), book.getPubCode().c_str(), book.getPrice());
        output << c_text;

        return output;};

    // If two ISBNs are the same, the book is not added to the inventory.
    friend bool operator ==(Book mainbook, Book otherbook){
        if (mainbook.getISBN() == otherbook.getISBN()){return true;}
        else {return false;};
    };
};