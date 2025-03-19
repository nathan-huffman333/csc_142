/*
    File name: HardAssignment.cpp 
    Description: This program creates characters of differing names, classes, HPs, and strengths, and then displays this information, as well as the average health, neatly.
    Name: Nathan Huffman
    Date: 3/19/2025
*/

# include <iostream>
# include "CharClass.h"
# include <cstdio>

int main(){
    // The array of four characters is created with different names, classes, health, and strength.
    Character characters[4] = {
        {"BRYNDOR", CharacterClass::Warrior, 1500, 60.0f}, {"ZEPHIRON", CharacterClass::Mage, 500, 100.0f},
        {"SHADE", CharacterClass::Rogue, 750, 90.0f}, {"KAELITH", CharacterClass::Archer, 1000, 80.0f}
    };

    // The average health of all of the characters is determined and declared as a variable.
    double avgHP = ((characters[0].health + characters[1].health + characters[2].health + characters[3].health)/4.0);

    // A title is printed to make up a neat table that will show different characters and their attributes.
    printf("\n[]==============================================================================[]");
    printf("\n||                                  CHARACTERS                                  ||");
    printf("\n[]==================[]==================[]==================[]==================[]\n");
    
    // Using a for loop, the names, classes, healths, and strengths of each character is displayed neatly by using the array.
    for (int i = 0; i < 4; i++){
        printf("||  NAME: %-9.8s ||  CLASS: %-8.7s ||   HEALTH: %-6d ||  STRENGTH %-5.1f  ||\n",
            characters[i].name.c_str(), classToString(characters[i].type).c_str(), characters[i].health, characters[i].strength);};
    
    // The average health of the characters is printed.
    printf("[]==================[]==================[]==================[]==================[]\n");
    printf("||                  ||        AVERAGE HEALTH = %-7.1f      ||                  ||\n", avgHP);
    printf("[]==================[]======================================[]==================[]\n\n");

    return 0;
}