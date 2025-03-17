/*
    File name: MiniQuizPractice.cpp
    Description: This file compares the indexes of two arrays and determines if they are exactly the same or not.
    Name: Nathan Huffman
    Date: 3/17/2025
*/


# include <iostream>

int main(){
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    bool same = true;

    if (size1 != size2){same = false;}
    else{
        for (int i = 0; i < size1; i++){
            if (array1[i] != array2[i]){same = false;}
            else {};};};

    if (same == true){
        printf("The arrays ARE the same!");
    }
    else {printf("The arrays are NOT the same!");};

    return 0;
};