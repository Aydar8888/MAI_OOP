#include "../include/isPalindrome.h"

bool isPalindrome(std::string line) {
    std::string cleaned;
    for (char c : line) {
        if (!std::isspace(c)) {
            cleaned += std::tolower(c);
        }
    }
    
    if (cleaned.length() < 2) {
        return true;
    }

    for (size_t left_index = 0, right_index = cleaned.length() - 1; left_index < right_index; ++left_index, --right_index) {
        if (cleaned[left_index] != cleaned[right_index]) {
            return false;
        }
    }
    return true;
}