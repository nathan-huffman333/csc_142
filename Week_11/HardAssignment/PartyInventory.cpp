/*
    File name: PartyInventory.cpp
    Description: This program allows for multiple inventories to be created and duplicated, as well as items to be added to the inventory and for the inventory to be displayed.
    Name: Nathan Huffman
    Date: 4/1/2025
*/

# include <iostream>

class Inventory{
    private:
        std::string* items;
        int capacity;
        int count;

    public:
        Inventory(int cap = 10) : capacity(cap), count(0) {items = new std::string[capacity];} // This is the dynamic constructor to allow for the list of "inventory" to be created.
        
        Inventory(const Inventory& other) : capacity(other.capacity), count(other.count) {
            // This is a copy constructor that allows for the inventory to be duplicated in its entirety.  
            items = new std::string[capacity];
            for (int i = 0; i < count; i++){items[i] = other.items[i];};};

        ~Inventory(){delete[] items;} // This is the deconstructor to allow for proper memory management.
    
    void addItem(const std::string& item){
        // This function allows for items to be added to the list of "inventory" until it is full.
        if (count < capacity) {items[count++] = item;}
        else {std::cout << "Inventory full! Cannot add more items." << std::endl;};};
    
    void showInventory() const{
        // This function is for printing every item in the inventory.
        for (int i = 0; i < count; i++){
            std::cout << "\t- " << items[i] << std::endl;};};
};

int main(){
    // The first inventory is created and a magic sword and potion of healing is added to it.
    Inventory inventory1;
    inventory1.addItem("Magic Sword");
    inventory1.addItem("Potion of Healing");

    // The first inventory is duplicated and a bag of holding is added to it.
    Inventory inventory2 = inventory1;
    inventory2.addItem("Bag of Holding");

    // The two inventories are displayed.
    printf("Inventory 1:\n");
    inventory1.showInventory();
    printf("\nInventory 2:\n");
    inventory2.showInventory();

    return 0;
}