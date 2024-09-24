#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to generate the payslip
void generatePayslip(string name, double baseSalary, double grossPercentage, double installment, double insurance) {
    // Calculate Gross Salary
    double grossSalary = baseSalary * (grossPercentage / 100);
    
    // Calculate Tax
    double tax = grossSalary * 0.20;
    
    // Calculate Net Salary
    double netSalary = grossSalary - tax - installment - insurance;
    
    // Display Payslip in Table Format
    cout << setw(40) << left << ("Payslip for Employee: " + name) << endl;
    cout << string(40, '=') << endl;
    cout << setw(20) << left << "Base Salary:" << "$" << setw(15) << right << fixed << setprecision(2) << baseSalary << endl;
    cout << setw(20) << left << "Gross Salary:" << "$" << setw(15) << right << fixed << setprecision(2) << grossSalary << endl;
    cout << setw(20) << left << "Tax (20%):" << "$" << setw(15) << right << fixed << setprecision(2) << tax << endl;
    cout << setw(20) << left << "Installment:" << "$" << setw(15) << right << fixed << setprecision(2) << installment << endl;
    cout << setw(20) << left << "Insurance:" << "$" << setw(15) << right << fixed << setprecision(2) << insurance << endl;
    cout << string(40, '=') << endl;
    cout << setw(20) << left << "Net Salary:" << "$" << setw(15) << right << fixed << setprecision(2) << netSalary << endl;
    cout << string(40, '=') << endl;
}

// Test cases for the payslip generation
void testPayslipCalculation() {
    // Test Case 1
    cout << "Test Case 1:" << endl;
    generatePayslip("Alice", 3000, 110, 100, 50);
    cout << endl;

    // Test Case 2
    cout << "Test Case 2:" << endl;
    generatePayslip("Bob", 7000, 150, 500, 300);
    cout << endl;

    // Test Case 3
    cout << "Test Case 3:" << endl;
    generatePayslip("Charlie", 4500, 100, 0, 0);
    cout << endl;

    // Test Case 4
    cout << "Test Case 4:" << endl;
    generatePayslip("Diana", 5500, 80, 200, 100);
    cout << endl;
}

int main() {
    // Run Payslip Tests
    testPayslipCalculation();
    return 0;
}
