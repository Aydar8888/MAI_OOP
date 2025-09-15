#include <gtest/gtest.h>
#include "../include/isPalindrome.h"

TEST(PalindromeTest, SingleCharacter) {
    ASSERT_TRUE(isPalindrome("a"));
}

TEST(PalindromeTest, EvenLengthPalindrome) {
    ASSERT_TRUE(isPalindrome("abba"));
}

TEST(PalindromeTest, NotEvenLengthPalindrome) {
    ASSERT_TRUE(isPalindrome("abcba"));
}

TEST(PalindromeTest, NotPalindrome) {
    ASSERT_FALSE(isPalindrome("abb"));
}

TEST(PalindromeTest, WithSpaces) {
    ASSERT_TRUE(isPalindrome("a man a plan a canal panama"));
}

TEST(PalindromeTest, MixedCase) {
    ASSERT_TRUE(isPalindrome("Madam"));
}

TEST(PalindromeTest, MixedCaseWithSpaces1) {
    ASSERT_TRUE(isPalindrome("A man a plan a canal Panama"));
}

TEST(PalindromeTest, EmptyString) {
    ASSERT_TRUE(isPalindrome(""));
}

TEST(PalindromeTest, TwoSameCharacters) {
    ASSERT_TRUE(isPalindrome("aa"));
}

TEST(PalindromeTest, TwoDifferentCharacters) {
    ASSERT_FALSE(isPalindrome("ab"));
}

TEST(PalindromeTest, WithPunctuation) {
    ASSERT_FALSE(isPalindrome("madam!"));
}

TEST(PalindromeTest, NumbersPalindrome) {
    ASSERT_TRUE(isPalindrome("12321"));
}

TEST(PalindromeTest, NumbersNotPalindrome) {
    ASSERT_FALSE(isPalindrome("12345"));
}

TEST(PalindromeTest, LongPalindrome) {
    ASSERT_TRUE(isPalindrome("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
}

TEST(PalindromeTest, LongNotPalindrome) {
    ASSERT_FALSE(isPalindrome("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}