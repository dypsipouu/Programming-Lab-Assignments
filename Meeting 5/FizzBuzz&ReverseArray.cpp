#include <iostream>
#include <vector>
#include <string>

// Problem 1: FizzBuzz function that returns a vector of strings
std::vector<std::string> fizzBuzz() {
    std::vector<std::string> result;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(std::to_string(i));
        }
    }
    return result;
}

// Problem 2: Function to reverse a vector of integers
std::vector<int> reverseArray(const std::vector<int>& arr) {
    std::vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; i--) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    // FizzBuzz Part
    std::cout << "FizzBuzz Output:" << std::endl;
    std::vector<std::string> fizzBuzzResults = fizzBuzz();
    
    // Use a traditional for loop instead of range-based for loop
    for (size_t i = 0; i < fizzBuzzResults.size(); i++) {
        std::cout << fizzBuzzResults[i] << std::endl;
    }

    // Reverse Array Part
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    
    std::vector<int> reversedArr = reverseArray(arr);

    std::cout << "\nReversed Array: ";
    for (size_t i = 0; i < reversedArr.size(); i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
