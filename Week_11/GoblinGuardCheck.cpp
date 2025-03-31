# include <iostream>

int main(){
    srand(time(NULL));
    int charisma = (rand() % 20) + 1;

    if (charisma >= 10){std::cout << "\nWith a roll of " << charisma << " You may enter the castle!\n";}
    else{std::cout << "\nWith a roll of " << charisma << ", You shall not pass!\n";};

    return 0;
}