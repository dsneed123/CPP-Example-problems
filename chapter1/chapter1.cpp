#include "chapter1.h"  
#include <iostream>

using namespace std;
bool isUnique(string str) {
    if (str.length() > 128) {
        return false;
    }
    bool arr[128] = {false};  

    for (int i = 0; i < int(str.length()); i++) {
        int val = str.at(i);
       if (arr[val])
            return false;
         arr[val]= true;
    }
    return true;
}

bool isPermutations(string str1, string str2){
    return false;
}
