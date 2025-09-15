#include <iostream>
#include <string>
#include "include/isPalindrome.h"

int main() {
    std::string line;
    std::cout << "Введите строку, которую хотите проверить на палиндром >> ";
    std::getline(std::cin, line);
    
    if (isPalindrome(line)) {
        std::cout << "Введенная строка является палиндромом!" << std::endl;
    } else {
        std::cout << "Введенная строка не является палиндромом!" << std::endl;
    }
    
    return 0;
}