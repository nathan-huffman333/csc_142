/*
    File name: MagicItemsWithUniquePowers.cpp
    Description: This code allows for multiple magic items with different abilities to be created with different charges, and for them to be used and decrease their charge.
    Name: Nathan Huffman
    Date: 3/25/2025
*/

# include <iostream>
# include <string>

class MagicItem{
    public:
        // This allows for item to be created and their attributes to be assigned to the correct variables.
        MagicItem(const std::string& itemName, const std::string& magicPower, int charges)
            : itemName_{itemName}, magicPower_{magicPower}, charges_{charges} {
                std::cout << itemName << " WAS CREATE WITH " << charges << " charges!\n";}
    
        void UseItem(){ 
            // When this function is called, if the charge is greater than 0 the item is used, otherwise it displays a message saying that it is out of charge.
            if (charges_ > 0){
                charges_ -= 1;
                std::cout << "\nYOU USED THE " << itemName_ << ". . ." << std::endl;
                std::cout << "THE ITEM " << magicPower_ << "!" << std::endl;
                std::cout << "CHARGES LEFT: " << charges_ << std::endl;}
            else {std::cout << "\nYOU TRIED TO USE THE " << itemName_ << " BUT IT HAD NO CHARGE LEFT." << std::endl;}}
    
    private:
        // The basic attributes of the item are established in the private field.
        std::string itemName_;
        std::string magicPower_;
        int charges_;   
};


int main(){
    // Three different magic items are created.
    MagicItem sword("THE SWORD OF A THOUSAND CUTS", "DUPLICATES ITSELF AND FLIES TOWARDS YOUR ENEMIES", 1);
    MagicItem staff("THE STAFF OF OBJECT ORIENTATION", "ANIMATES A NEARBY OBJECT INTO A FAMILIAR TO ATTACK YOUR ENEMIES", 2);
    MagicItem ring("THE RING OF PYTHON PROTECTION", "SUMMONS A PYTHONIC FORCE FIELD TO PROTECT YOU", 3);

    // The sword is used until a message displays that it is out of charge.
    sword.UseItem();
    sword.UseItem();

    // The staff is used until a message displays that it is out of charge.
    staff.UseItem();
    staff.UseItem();
    staff.UseItem();
    
    // The ring is used until a message displays that it is out of charge.
    ring.UseItem();
    ring.UseItem();
    ring.UseItem();
    ring.UseItem();

    return 0;
}