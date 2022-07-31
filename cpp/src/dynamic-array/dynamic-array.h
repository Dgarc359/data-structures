#ifndef _DynamicArray_h
#define _DynamicArray_h
#include <iostream>
template <typename T>

class DynamicArray {
  public:
    /**
     * @brief The current length of the array
     */
    int length;

    /**
     * @brief Construct a new Dynamic Array object
     * 
     * @param givenLength 
     */
    DynamicArray(int givenLength) {
      array[givenLength];
    };

    /**
     * @brief Construct a new Dynamic Array object
     * Default constructor, array size defaults to 16
     */
    DynamicArray(){};

    /**
     * @brief Add an element to Dynamic Array.
     * 
     * Check if adding elem to array overflows array,
     * if it does, double array size and then add element,
     * otherwise add elem to array
     */
    void add(T elem) {
      this -> array[this -> length - 1] = elem;
      std::cout << "First array elem" << this -> array[0];
    };

    T * getArray() {
      return this -> array;
    }

  private:
    int maxSize;
    /**
     * Init inner array to size 16
     * hopefully we're doing generics right here... 
     * TODO: init array to requested size during class construction
     * TODO: Maybe we need to use a vector instead?
     */
    T array[16] = {}; 
};

#endif // _DynamicArray_h