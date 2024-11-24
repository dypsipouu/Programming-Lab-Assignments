# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable name
TARGET = student_data

# Source files
SRC = student_data.cpp

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean rule to remove the executable and temporary files
clean:
	rm -f $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Phony targets
.PHONY: all clean run
