#include "chapter1.h"  
#include <iostream>
#include <unordered_map> 

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

//TODO: Davis not efficinet use a hash map
bool palindromePermutation(string str){
    
    
    for (int x = 0; x < int(str.length()); x++){
        int charCount = countChars(str, str.at(x));
        if (charCount % 2 != 0 && charCount != 1)
            return false;
    }
    return true;


}

bool oneAway(string str1, string str2){
    if (str1 == str2)
        return true;

    //used to map the characters of a string
    unordered_map<char, int> char_map;

    //adds all the chars from the string to the hash table
    for (int x = 0; x < int(str1.length()); x++){
        char_map[str1[x]] = x;
    }

    int misses = 0;
    for (int y = 0; y < int(str2.length()); y++){
        if(char_map.find(y) != char_map.end()){
            misses++;
        }

    if (misses > 1)
        return false;
    else
        return true;
    }




    
    return false;
}




