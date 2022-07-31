# Directory Macros
DA = src/dynamic-array

# Dynamic Array Make
output: $(DA)/dynamic-array.o $(DA)/main.o
	g++ -v $(DA)/dynamic-array.o $(DA)/main.o -o $(DA)/dynamic-array

dynamic-array.o: $(DA)/dynamic-array.cpp $(DA)/dynamic-array.h
	g++ -cv $(DA)/dynamic-array.cpp

main.o: $(DA)/main.cpp
	g++ -cv $(DA)/main.cpp

#TODO: better cleaning logic
clean:
	rm **/**/*.o **/**/dynamic-array.exe **/**/dynamic-array