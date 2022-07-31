#include "dynamic-array.h"
#include <iostream>

using namespace std;

int main() {
    DynamicArray<int> arr; // should default to an array of size 16
    std::cout << "Adding Elem\n";
    arr.add(2);
    arr.add(3);

    std::cout << "\nElem 0: " 
        << arr.getArray()[0]
        << "\nElem 1: "
        << arr.getArray()[1];

    DynamicArray<const char*> charArr;
    charArr.add("c");
    charArr.add("b");
    std::cout << "\n" 
        << charArr.getArray()[0] 
        << "\n"
        << charArr.getArray()[1];

    return 0;
};