// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 
// This code gets the name of the user and then it prints a message including the name.
#include <iostream>
#include <string>

int main(){
    std::string str;
    std:: cout << "Hello, please type your name:" << std::endl;
    std::cin >> str;   
    std::cout << "Hello " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
