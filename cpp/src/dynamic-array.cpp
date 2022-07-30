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
     * innit inner array to size 16
     * hopefully we're doing generics right here... 
     */
    T array[16] = {}; 
};
