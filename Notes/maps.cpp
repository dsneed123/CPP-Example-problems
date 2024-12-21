#include <iostream> // Standard C++ library for input and output
#include <unordered_map> // Importing the unordered_map library

// Entry point of the program
int main() {
    // Example: Creating an unordered_map
    std::unordered_map<std::string, int> example_map;

    // Adding key-value pairs
    example_map["apple"] = 1;
    example_map["banana"] = 2;
    example_map["cherry"] = 3;

    // Accessing and printing values
    for (const auto& pair : example_map) { //loops over example map
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    return 0;
}
