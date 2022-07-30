#ifndef _DynamicArray_h
#define _DynamicArray_h
template <typename T>

class DynamicArray {
  public:
    int size;
    /**
     * @brief add an element to Dynamic Array.
     * 
     * Check if adding elem to array overflows array,
     * if it does, double array size and then add element,
     * otherwise add elem to array
     */
    void add();

  private:
    int maxSize;
    /**
     * init inner array to size 16
     * hopefully we're doing generics right here... 
     * TODO: init array to requested size during class construction
     */
    T array[16] = {}; 
};

#endif // _DynamicArray_h