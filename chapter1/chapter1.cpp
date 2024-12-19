#include "chapter1.h"  
#include <iostream>

using namespace std;
bool isUnique(string str) {
    //Edge case. If theres more than 128 characters it must be false
    if (str.length() > 128) {
        return false;
    }

    bool arr[128] = {false};  
    for (int i = 0; i < int(str.length()); i++) {
        int val = str.at(i); //get the ascii val as an int
       if (arr[val])
            return false;
         arr[val]= true; 
    }
    return true;
}

bool isPermutations(string str1, string str2){
    if (str1.length() != str2.length()) return false;
    

    int arr[128] = {0};

    for (int count = 0; count < int(str1.length()); count++){
        int val = str1.at(count);
        arr[val]++;
    }

    for (int count2 = 0; count2 < int(str2.length()); count2 ++){
        int val = str2.at(count2);
        arr[val]--;

        if (arr[val] < 0) return false;
        
    }



    return true;
}

string URLify(string str, int length){
    string tmp;
    for (int x = 0; x < int(str.length()); x++){
        if (str.at(x) == ' '){
            tmp.append("%20");
        }
        tmp.append(1, str.at(x));
    }
    str = tmp;
    return str;
}



//helper function for palindome permutation. Returns the amount of chars in a string
int countChars(string str, char c){
        int count = 0;
        for (int x = 0; x < int(str.length()); x++){
            if (str.at(x) == c){
                count ++;
            }
        }
        return count;
    }


bool palindromePermutation(string str){
    
    
    for (int x = 0; x < int(str.length()); x++){
        int charCount = countChars(str, str.at(x));
        if (charCount % 2 != 0 && charCount != 1)
            return false;
    }
    return true;


}


