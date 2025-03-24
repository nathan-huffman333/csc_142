/*
    File name: HeroAndPotion.cpp
    Description: 
    Name: Nathan Huffman
    Date: 3/24/2025
*/

# include <iostream>

void drinkPotion(int &hp, int heal){
    // This function takes the hp as a reference and increases it by a given amount.
    std::cout << "YOU USED THE POTION AND GAINED: " << heal << " HP" << std::endl;
    hp += heal;
    std::cout << "YOUR HEALTH IS NOW: " << hp << " HP\n"<< std::endl;};

void damageHero(int* hp, int damage){
    // This function takes hp as a pointer and reduces it by a given amount.
    std::cout << "YOU WERE INJURED AND LOST: " << damage << " HP" <<  std::endl;
    *hp -= damage;
    std::cout << "YOUR HEALTH IS NOW: " << *hp << " HP\n" << std::endl;};


int main(){
    // The hp is declared and displayed.
    int hp = 10;
    std::cout << "HEALTH: " << hp << "\n" << std::endl;
    // The damageHero function is called.
    damageHero(&hp, 4);
    // The drinkPotion function is called.
    drinkPotion(hp, 2);
    return 0;}