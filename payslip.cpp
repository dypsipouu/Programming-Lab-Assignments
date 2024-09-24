#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

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

int main() {
    // Example usage
    string name = "John Doe";
    double baseSalary = 5000;
    double grossPercentage = 120;  // 120% of base salary
    double installment = 200;
    double insurance = 150;

    generatePayslip(name, baseSalary, grossPercentage, installment, insurance);

    return 0;
}
