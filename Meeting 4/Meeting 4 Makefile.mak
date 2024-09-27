# Makefile for Sum of Natural Numbers and Multiplication Table programs

# Compiler
CC = g++
CFLAGS = -Wall

# Targets
all: sum multiplication

# Compile sum.cpp
sum: sum.cpp
	$(CC) $(CFLAGS) -o sum sum.cpp

# Compile multiplication.cpp
multiplication: multiplication.cpp
	$(CC) $(CFLAGS) -o multiplication multiplication.cpp

# Run Sum Program
run-sum:
	./sum

# Run Multiplication Program
run-multiplication:
	./multiplication

# Test Sum Program
test-sum:
	@echo "Testing Sum Program"
	@while IFS= read -r input && IFS= read -r expected_output; do \
		echo "$$input" | grep "Input:" | cut -d ":" -f 2 | xargs ./sum > output.txt; \
		echo "$$expected_output" | grep "Output:" | cut -d ":" -f 2 | xargs; \
		echo "Expected: $$expected_output" && echo "Result: "; \
	done < test.txt

# Test Multiplication Program
test-multiplication:
	@echo "Testing Multiplication Program"
	@while IFS= read -r input && IFS= read -r expected_output; do \
		echo "$$input" | grep "Input:" | cut -d ":" -f 2 | xargs ./multiplication > output.txt; \
		echo "$$expected_output" | grep "Output:" | cut -d ":" -f 2 | xargs; \
		echo "Expected: $$expected_output" && echo "Result: "; \
	done < test.txt

# Clean
clean:
	rm -f sum multiplication output.txt
