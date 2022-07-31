#include "dynamic-array.h"
#include <iostream>

using namespace std;

int main() {
    DynamicArray<int> arr;
    arr.add(2);
    std::cout << arr.getArray()[0];

    return 0;
};