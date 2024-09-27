# Makefile for FizzBuzz and Reverse Array Assignment

# Compiler settings
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = main

# Target to compile the program
make: $(TARGET)

$(TARGET): FizzBuzzAndReverseArray.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) FizzBuzzAndReverseArray.o

FizzBuzzAndReverseArray.o: FizzBuzzAndReverseArray.cpp
	$(CXX) $(CXXFLAGS) -c FizzBuzzAndReverseArray.cpp

# Target to run the compiled program
run: $(TARGET)
	./$(TARGET)

# Target to clean up compiled files
clean:
	rm -f $(TARGET) *.o

# Target to test the output (Example for manual test cases)
test: $(TARGET)
	./$(TARGET) > output.txt
	diff output.txt expected_output.txt || echo "Test Failed"
