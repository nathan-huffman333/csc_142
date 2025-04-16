/*
    File name: 9-1.cpp
    Description: This program demonstrates the use of a fold function template to sum an array of integers.
    Name: Nathan Huffman
    Date: 4/15/2025
*/

# include <iostream>
# include <cstddef>

template <typename Fn, typename In, typename Out>
constexpr Out fold(Fn function, In* input, size_t length, Out initial){
    for (size_t i = 0; i < length; ++i) {
        initial = function(initial, input[i]);
    }
    return initial;
}

int main(){
    int data[]{ 100, 200, 300, 400, 500 };
    size_t data_len = 5;
    auto sum = fold([](auto x, auto y) { return x + y; }, data, data_len, 0);
    std::cout << "Sum: " << sum << std::endl;
}