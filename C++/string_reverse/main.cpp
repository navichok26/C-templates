#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string input_string;
    std::getline(std::cin, input_string);
    std::reverse(input_string.begin(), input_string.end());
    std::cout << input_string << std::endl;
    return 0;
}