# pragma once
# include <string>

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

        // These getter methods return the title, author, price, edition, codeNum, or pubCode when called accordingly.
        std::string getTitle(){return title;};
        std::string getAuthor(){return author;};
        double getPrice(){return price;};
        int getEdition(){return edition;};
        std::string getISBN(){return codeNum;};
        std::string getPubCode(){return pubCode;};

        // This setter method allows for the price of the book to be changed.
        void changePrice(double newPrice){price = newPrice;};
};