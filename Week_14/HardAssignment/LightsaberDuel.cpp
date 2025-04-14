/*
    File name: LightsaberDuel.cpp
    Description: This program simulates a lightsaber duel between Obi-Wan Kenobi and Darth Maul using functions and random number generation.
    Name: Nathan Huffman
    Date: 4/14/2025
*/

# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int roll_attack(){return rand() % 10 + 1;}; // This function generates a random attack value between 1 and 10.

int roll_defense(){return rand() % 10 + 1;}; // This function generates a random defense value between 1 and 10.

bool is_hit(int attack, int defense){return attack > defense;}; // This function checks if the attack is higher than the defense and returns the boolean.

void duel(){
    int obiwan_wins = 0;
    int darth_maul_wins = 0;

    for (int i = 1; i <= 5; i++){
        int attack = roll_attack(); // The attack value is generated using the roll_attack function.
        int defense = roll_defense(); // The defense value is generated using the roll_defense function.
    
        cout << "Round: " << i << ":  Obi-Wan attacks with " << attack << ", Maul defends with " << defense << " - "; // The round number, attack, and defense values are displayed.
        if (is_hit(attack, defense)){
            cout << "HIT!" << endl; // If the attack is higher than the defense, it is a hit.
            obiwan_wins++; // Obi-Wan wins the round.
        } else if (attack == defense){
            cout << "BLOCK!" << endl; // If the attack is equal to the defense, it is a block.
        } else {
            cout << "MISS!" << std::endl; // If the attack is lower than the defense, it is a miss.
            darth_maul_wins++; // Darth Maul wins the round.
        };
    };
    
    cout << "\nObi-Wan wins " << obiwan_wins << " rounds." << endl; // Obi-Wan's total wins are displayed.
    cout << "Darth Maul wins " << darth_maul_wins << " rounds.\n" << endl; // Darth Maul's total wins are displayed.

    if (obiwan_wins > darth_maul_wins){
        cout << "Obi-Wan wins the duel!\n" << endl; // If Obi-Wan has more wins, he wins the duel.
    } else if (darth_maul_wins > obiwan_wins){
        cout << "Darth Maul wins the duel!\n" << endl; // If Darth Maul has more wins, he wins the duel.
    } else {
        cout << "It's a tie!\n" << endl;}; // If both have the same number of wins, it's a tie.
};

int main(){
    srand(static_cast<unsigned int>(time(nullptr))); // This line ensures the random number generator is seeded with the current time to make the program different every time.
    duel(); // The duel function is called to start the simulation.
    return 0;
}

