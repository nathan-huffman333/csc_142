/*
    File name: 3-5.cpp
    Description: THis describes when const and auto could have been used in chapter 2.
    Name: Nathan Huffman
    Date: 3/27/2025

    For auto, because it is meant to automatically declared the type of variable, it could be used for all explicit types in all listings.
    Variables that are int, doubles, chars, etc. could be replaced with auto, but if we know the variable type, we might as well be more specific anyways.

    As for when we could use const for the methods in chapter 2, anytime that a method does not alter any members of a class, it can be made into a const.
    For example. in 2-20, the function of int get_year() could be marked as const because it doesn't change the state of the object, and only returns.
*/