# pragma once
# include <iostream>
# include <string>

// The types of classes are enumerated to a specific list of 4 types.
enum class CharacterClass{Warrior, Mage, Rogue, Archer};

// The types of information that will make up the object is determined in a struct.
struct Character{
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

// A helper function to convert the enum of the different classes into strings for printing.
std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "WARRIOR";
        case CharacterClass::Mage: return "MAGE";
        case CharacterClass::Archer: return "ARCHER";
        case CharacterClass::Rogue: return "ROGUE";
        default: return "UNKNOWN";
    }
};