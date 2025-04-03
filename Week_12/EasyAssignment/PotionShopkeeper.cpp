/*
    File name: PotionShopkeeper.cpp 
    Description: This code allows for an adventurer to buy potions from a potion shopkeeper for 10 gold each and for their gold to be kept track of.
    Name: Nathan Huffman
    Date: 4/3/2025
*/

# include <iostream>

int errorCheck(int &potions, int gold){ // This function is used to error check to ensure the user doesn't try to buy more potions than they can afford, or a negative number.
    bool repeat = true;
    while (repeat == true){
        if (potions < 0 || std::cin.fail()){ // If the user enters text or a negative, the shopkeeper asks them to repeat a valid number.
            std::cin.clear();
            std::cin.ignore(123, '\n');
            std::cout << "\nWhat? I'm afraid I misheard that, how many potions would you like to buy? (Current Gold: " << gold << "): ";
            std::cin >> potions;}
        else if ((potions*10) > gold){ // If the user tries to buy more potions than they can afford, the shopkeeper lets them know they don't have enough gold.
            std::cout << "\nI'm sorry, but I'm afraid you don't have enough gold for that many potions." << std::endl;
            if (gold >= 10){
                std::cout << "You could still afford a potion or two, however. If you'd still like to buy some, how many potions would you like? (Current Gold: " << gold << "): ";
                std::cin >> potions;}
            else {break;};}
        else {repeat = false;};};
    return(potions);};

int main(){
    int potions;
    int gold = 100;
    std::cout << "\nHello adventurer! Welcome to my potion shop." << std::endl; 
    std::cout << "Each potion costs 10 gold pieces." << std::endl;
    std::cout << "\nHow many potions would you like to buy? (Current Gold: " << gold << "): "; // The shopkeeper asks how many potions they'd like to buy.
    std::cin >> potions;
    errorCheck(potions, gold); // The errorCheck function is called.
    
    while ((potions*10) <= gold){ // If the number of potions the user entered is valid, they are either charged and asked again or purchase no potions.
        if (potions == 0){
            std::cout << "\nThat's all for today? Alright, then. Have a nice day!\n" << std::endl;
            break;}
        else {
            gold -= (potions*10);
            std::cout << "\nGreat! Here's your " << potions << " potions. How many more would you like to buy? (Current Gold: " << gold << "): ";
            std::cin >> potions;
            errorCheck(potions, gold);};};
    
    return 0;};