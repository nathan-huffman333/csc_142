/*
    File name: DungeonCombatSimulator.cpp
    Description: This simulates combat in DND, requiring the rolling of initiative, a D20 to hit by beating the enemy's AC, and a damage dice to subtract from their HP. 
    Name: Nathan Huffman
    Date: 4/3/2025
*/

# include <iostream>
# include <ctime>

int DiceRoll(int numofsides){ // This function allows for dice of multiple sides to be rolled and then returned. 
    return(rand() % numofsides) + 1;};

int main(){
    srand(time(0));

    int HHP = 20; // Player HP
    int const HAC = 15; // Player AC
    int GHP = 10; // Goblin HP
    int const GAC = 12; // Goblin AC

    // The player and goblin both roll for initiative to see who goes first.
    int playerInit = DiceRoll(20); 
    int goblinInit = DiceRoll(20);

    std::cout << "Rolling for Initiative..." << std::endl;
    std::cout << "\tThe Hero rolled a " << playerInit << std::endl;
    std::cout << "\tThe Goblin rolled a " << goblinInit << std::endl;

    if (playerInit >= goblinInit){ // If the player rolled higher or equal, they go first.
        std::cout << "\nThe Hero will go first this time..." << std::endl;
        while (HHP > 0 && GHP > 0){
            std::cout << "\n\t---HERO'S TURN---" << std::endl;
            int Hattackroll = DiceRoll(20); // Rolls to attack.
            if (Hattackroll >= GAC){ // If attack succeeds, roll for damage.
                std::cout << "The Hero rolls a " << Hattackroll << " and hits!" << std::endl;
                int damage = DiceRoll(8);
                std::cout << "The Goblin takes " << damage << " damage!" << std::endl;
                GHP -= damage; // Damage is subtracted from the goblin's health.
                if (GHP > 0){std::cout << "Goblin's Health: " << GHP << std::endl;}
                else {break;}}
            else {std::cout << "The Hero rolls a " << Hattackroll << " and misses!" << std::endl;}; // If the attack roll fails, the hero misses.
            std::cout << "\n\t---GOBLIN'S TURN---" << std::endl;
            int Gattackroll = DiceRoll(20); // Rolls to attack.
            if (Gattackroll >= HAC){ // If attack succeeds, roll for damage.
                std::cout << "The Goblin rolls a " << Gattackroll << " and hits!" << std::endl;
                int damage = DiceRoll(6);
                std::cout << "The Hero takes " << damage << " damage!" << std::endl;
                HHP -= damage; // Damage is subtracted from the hero's health.
                if (HHP > 0){std::cout << "Hero's Health: " << HHP << std::endl;}
                else {break;};}
            else {std::cout << "The Goblin rolls a " << Gattackroll << " and misses!" << std::endl;};};} // If the attack roll fails, the goblin misses.
    else { // If the goblin rolled higher, they go first.
        std::cout << "\nThe Goblin will go first this time..." << std::endl;
        while (HHP > 0 && GHP > 0){
            std::cout << "\n\t---GOBLIN'S TURN---" << std::endl;
            int Gattackroll = DiceRoll(20); // Rolls to attack.
            if (Gattackroll >= HAC){ // If attack succeeds, roll for damage.
                std::cout << "The Goblin rolls a " << Gattackroll << " and hits!" << std::endl; 
                int damage = DiceRoll(6);
                std::cout << "The Hero takes " << damage << " damage!" << std::endl;
                HHP -= damage; // Damage is subtracted from the hero's health.
                if (HHP > 0){std::cout << "Hero's Health: " << HHP << std::endl;} 
                else {break;};}
            else {std::cout << "The Goblin rolls a " << Gattackroll << " and misses!" << std::endl;}; // If the attack roll fails, the goblin misses.
            std::cout << "\n\t---HERO'S TURN---" << std::endl;
            int Hattackroll = DiceRoll(20); // Rolls to attack.
            if (Hattackroll >= GAC){ // If attack succeeds, roll for damage.
                std::cout << "The Hero rolls a " << Hattackroll << " and hits!" << std::endl;
                int damage = DiceRoll(8);
                std::cout << "The Goblin takes " << damage << " damage!" << std::endl;
                GHP -= damage; // Damage is subtracted from the goblin's health.
                if (GHP > 0){std::cout << "Goblin's Health: " << GHP << std::endl;}
                else {break;};}
            else {std::cout << "The Hero rolls a " << Hattackroll << " and misses!" << std::endl;};};}; // If the attack roll fails, the hero misses.

    if (HHP <= 0){std::cout << "\nThe Hero falls in battle...\n" << std::endl;}
    else {std::cout << "\nThe Hero slays the Goblin!\n" << std::endl;}

    return 0;
}