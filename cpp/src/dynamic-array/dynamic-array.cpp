#include "dynamic-array.h"
#include <iostream>
using namespace std;

template <typename T>

void DynamicArray<T>::add(T elem){
    cout << "Dynamic Array Adding Elem";
    this->array[this->length - 1] = elem;
};
