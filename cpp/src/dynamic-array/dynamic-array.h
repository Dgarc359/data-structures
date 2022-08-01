#ifndef _DynamicArray_h
#define _DynamicArray_h
#include <iostream>

template <typename T>

class DynamicArray {
  // pointer to array, reassign when needed, hopefully this is the right thought process
  T *p = innerArray;

  /**
   * @brief The current length of the array
   * default to 0
   */
  int length = 0;

  public:
    /**
     * @brief Construct a new Dynamic Array object
     * 
     * @param givenLength 
     */
    DynamicArray(int givenLength) {
      T newArr[givenLength];
      p = newArr;
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
      // TODO: check if adding elem overflows array
      if(length == arrSize) {
        // copy all elements of inner array into new array
        T newArr[this -> arrSize];

        for(int i = 0; i < arrSize; i++) {
          newArr[i] = innerArray[i];
        }
        
        p = newArr;
      }
      p[this->length] = elem;
      length++;

      std::cout << 
        "current length\n" << 
        length;
    };

    T * getArray() {
      return p;
    }

  private:
    int maxSize = 16;
    int arrSize = sizeof(this -> innerArray);

  /**
   * Init inner array to size 16
   * hopefully we're doing generics right here... 
   * TODO: init array to requested size during class construction
   * TODO: Maybe we need to use a vector instead?
   */
  T innerArray[16];
};

#endif // _DynamicArray_h
