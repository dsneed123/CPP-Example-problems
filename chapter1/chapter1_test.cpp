#include <iostream>
#include <cassert>
#include "chapter1.h"  // Include the header file for function declaration

void testIsUnique() {
    assert(isUnique("abcdefg") == true);
    assert(isUnique("aabbcc") == false);
}

void testIsPermutation() {
    assert(isPermutations("abc", "cba") == true);
    assert(isPermutations("abc", "def") == false);
}

void testURLify(){
    assert(URLify("Mr John Smith", 13) == "Mr%20John%20Smith");
}

void testpalindromePermutations(){
    assert(palindromePermutation("tactcoa")== true);
}

void runChapter1Tests() {
    testIsUnique();
    testIsPermutation();
    std::cout << "Chapter 1 tests passed!" << std::endl;
    testpalindromePermutations();
}

