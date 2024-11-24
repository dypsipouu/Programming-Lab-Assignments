#include <iostream>
#include <string>
using namespace std;

// Function for simple mathematical operations
int calculate(const string& operation, int a, int b) {
    if (operation == "add") {
        return a + b;
    } else if (operation == "subtract") {
        return a - b;
    } else {
        cout << "Invalid operation!" << endl;
        return 0;
    }
}

// Recursive function to calculate factorial
int factorial(int x) {
    if (x == 0 || x == 1) {  // Base case
        return 1;
    } else {
        return x * factorial(x - 1);  // Recursive case
    }
}

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) {  // Base case
        return a;
    } else {
        return gcd(b, a % b);  // Recursive case
    }
}

int main() {
    int choice;
    cout << "Choose a program to run:\n";
    cout << "1. Simple Mathematical Operations (Addition/Subtraction)\n";
    cout << "2. Factorial Calculation\n";
    cout << "3. GCD (Greatest Common Divisor) Calculation\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        string operation;
        int a, b;
        cout << "Enter operation (add/subtract): ";
        cin >> operation;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << calculate(operation, a, b) << endl;

    } else if (choice == 2) {
        int number;
        cout << "Enter a number to calculate its factorial: ";
        cin >> number;
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    } else if (choice == 3) {
        int num1, num2;
        cout << "Enter two integers to calculate their GCD: ";
        cin >> num1 >> num2;
        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
