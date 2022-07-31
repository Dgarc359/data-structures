#include "dynamic-array.h"
#include <iostream>

using namespace std;

int main() {
    DynamicArray<int> arr; // should default to an array of size 16
    std::cout << "Adding Elem\n";
    arr.add(2);
    std::cout << "\nElem 0: " << arr.getArray()[0];

    return 0;
};