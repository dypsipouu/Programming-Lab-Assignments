#include <iostream>
#include <iomanip>
using namespace std;

// Define a struct to store student data
struct Student {
    int nim;
    float uts;
    float uas;
    float average;
};

int main() {
    const int MAX_STUDENTS = 50; // Maximum number of students
    int n;                      // Number of students
    Student students[MAX_STUDENTS]; // Array to hold student data

    // Get the number of students
    cout << "Enter the number of students (maximum " << MAX_STUDENTS << "): ";
    cin >> n;

    if (n > MAX_STUDENTS || n <= 0) {
        cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << "." << endl;
        return 1;
    }

    // Input student data
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter data for student " << i + 1 << ":\n";
        cout << "Enter NIM: ";
        cin >> students[i].nim;
        cout << "Enter UTS value: ";
        cin >> students[i].uts;
        cout << "Enter UAS value: ";
        cin >> students[i].uas;

        // Calculate the average
        students[i].average = (students[i].uts + students[i].uas) / 2.0;
    }

    // Output student data
    cout << "\n--- Student Data ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "NIM: " << students[i].nim << endl;
        cout << fixed << setprecision(2); // Set precision for average
        cout << "Average: " << students[i].average << endl;
        cout << "------" << endl;
    }

    return 0;
}
