/*
    File name: Yoda'sMessageDecoder.cpp
    Description: This program decodes Yoda's messages using a Caesar cipher and calculates the sum of letters in a message.
    Name: Nathan Huffman
    Date: 4/14/2025
*/

# include <iostream>
# include <string>
# include <cctype>
using namespace std;

int decode_char(char letter){return toupper(letter) - 'A' + 1;} // Turns the letter into its corresponding number of 1 to 26.

int decode_char(char letter, int bonus){return decode_char(letter) + bonus;} // Overloaded     

int decode_message(const string& message, int index = 0){ // Recursive
    if (index >= message.size()) return 0;
    return decode_char(message[index]) + decode_message(message, index + 1);
}

string yoda_shift(const string& msg, int shift = 2){ // Caesar cipher
    string result; 
    for (char c : msg){ 
        if (isalpha(c)){
            char base = isupper(c) ? 'A' : 'a'; 
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result; // Return the shifted message
}

string yoda_decode(const string& msg, int shift = -2){ // This functions decodes a message that is encrypted in a casear cipher.
    string result; 
    for (char c : msg){ 
        if (isalpha(c)){
            char base = isupper(c) ? 'A' : 'a'; 
            int shifted = (c - base + shift) % 26;
            if (shifted < 0) shifted += 26;
            result += static_cast<char>(shifted + base);
        } else {
            result += c;
        }
    }
    return result; // Return the shifted message
} 

int main(){
    cout << "Yoda decoding 'N': " << decode_char('N') << "\n";
    cout << "With Force bonus +5: " << decode_char('N', 5) << "\n";
    cout << "Yoda message sum of 'ABC': " << decode_message("ABC") << "\n";
    cout << "Yoda shifted message: " << yoda_shift("Do, or do not, there is no try") << "\n";
    cout << "Yoda deciphered message: " << yoda_decode(yoda_shift("Do, or do not, there is no try")) << "\n";
    return 0;
}