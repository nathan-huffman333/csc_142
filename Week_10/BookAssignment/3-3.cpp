/*
    File name: 3-2.cpp
    Description: This code creates a doubly linked list of stormtroopers with prefixes and operating numbers which are then displayed forwards and backwards.
    Name: Nathan Huffman
    Date: 3/27/2025
*/

#include <cstdio>

struct Element {
    Element* next{};
    Element* before{};
    
    // This function allows for elements to be created and understood as the next element of a list.
    void insert_after(Element* new_element){ 
        new_element->next = next;
        new_element->before = this;
        next = new_element;}

    // This function allows for elements to be created and understood as the previous element of a list.
    void inser_before(Element* new_element){
        new_element->before = before;
        new_element->next = this;
        before = new_element;}

    char prefix[2]; 
    short operating_number;};


int main() {
    // The three stormtrooper objects are created.
    Element trooper1, trooper2, trooper3; 
    // The prefixes are created for stormtrooper 1.
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    // The operating numbers are created for stormtrooper 1.
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    // The prefixes are created for stormtrooper 2. 
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    // The operating numbers are created for stormtrooper 2.
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3); 
    // The prefixes are created for stormtrooper 3.
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    // The operating numbers are created for stormtrooper 3.
    trooper3.operating_number = 005; 
    
    // A for loop is create to display the prefixes and operating numbers of the stormtroopers in order.
    printf("Forwards:\n");
    for (Element *cursor = &trooper1; cursor; cursor = cursor->next){
        printf("\tstormtrooper %c%c-%d\n",
            cursor->prefix[0],
            cursor->prefix[1],
            cursor->operating_number);}

     // A for loop is create to display the prefixes and operating numbers of the stormtroopers backwards.
    printf("\nBackwards:\n");
    for (Element *cursor = &trooper3; cursor; cursor = cursor->before){
        printf("\tstormtrooper %c%c-%d\n",
        cursor->prefix[0],
        cursor->prefix[1],
        cursor->operating_number);}

    return 0;
}