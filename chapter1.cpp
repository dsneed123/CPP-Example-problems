#include <iostream>

using namespace std;

bool isUnique(string str){
    
    if (str.length() > 128){
     return false;
    }

    bool arr[128];

    for (int i = 0; i < str.length(); i++){
        if (arr[i] == true){
            return false;
        }
        arr[i] = true;
    }
    return true;
}
int main() {
  
    isUnique("test");

    return 0;  
}

