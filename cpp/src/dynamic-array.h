#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
template <typename T>

class DynamicArray {
  public:
    int size;
    void add() {


      // check if adding elem to array overflows array size
      // if it does, double array size
      // otherwise add elem to array
    };

  private:
    int maxSize;
    
    /**
     * init inner array to size 16
     * hopefully we're doing generics right here... 
     * TODO: init array to requested size during class construction
     */
    T array[16] = {}; 
};

#endif // DYNAMICARRAY_H