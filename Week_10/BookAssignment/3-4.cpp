/*
    File name: 3-4.cpp
    Description: This code is the changed code of 3-11 but uses auto to reimplement listing. 
    Name: Nathan Huffman
    Date: 3/27/2025
*/

# include <cstdio>

struct Element{
    Element* next{};
    // This function allows for elements to be created and understood as the next element of a list.
    void insert_after(Element* new_element){
        new_element->next = this->next;
        this->next = new_element;}
    char prefix[2];
    short operating_number;
};

int main(){
    // The original number is created and the reference
    auto original = 100;
    auto& original_ref = original;
    
    // The original and reference are displayed.
    printf("Original: %d\n", original); 
    printf("Reference: %d\n", original_ref); 
    
    // A new value is created and the original is also changed to this value.
    auto new_value = 200;
    original_ref = new_value; 
    
    // The original, new value, and reference are all displayed.
    printf("Original: %d\n", original); 
    printf("New Value: %d\n", new_value); 
    printf("Reference: %d\n", original_ref);
    
    return 0;
}