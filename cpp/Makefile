# Directory Macros
DA = src/dynamic-array

# Dynamic Array Make
output: $(DA)/dynamic-array.o $(DA)/main.o
	g++ $(DA)/dynamic-array.o $(DA)/main.o -o $(DA)/dynamic-array

dynamic-array.o: $(DA)/dynamic-array.cpp $(DA)/dynamic-array.h
	g++ -c $(DA)/dynamic-array.cpp

main.o: $(DA)/main.cpp
	g++ -c $(DA)/main.cpp

#TODO: better cleaning logic
clean:
	rm **/**/*.o **/**/dynamic-array.exe **/**/dynamic-array