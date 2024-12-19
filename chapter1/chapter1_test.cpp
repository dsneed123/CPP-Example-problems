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

void runChapter1Tests() {
    testIsUnique();
    testIsPermutation();
    std::cout << "Chapter 1 tests passed!" << std::endl;
}
