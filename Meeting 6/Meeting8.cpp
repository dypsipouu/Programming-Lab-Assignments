#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Define a struct to hold student data
struct Student {
    long long NISN;
    string Nama;
    int Value;
};

// Insertion Sort
void insertionSort(vector<Student>& students, string key, bool descending = false) {
    for (int i = 1; i < students.size(); i++) {
        Student current = students[i];
        int j = i - 1;
        while (j >= 0 && 
               ((key == "NISN" && (descending ? current.NISN > students[j].NISN : current.NISN < students[j].NISN)) ||
                (key == "Value" && (descending ? current.Value > students[j].Value : current.Value < students[j].Value)))) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = current;
    }
}

// Selection Sort
void selectionSort(vector<Student>& students, string key, bool descending = false) {
    for (int i = 0; i < students.size(); i++) {
        int extremeIdx = i;
        for (int j = i + 1; j < students.size(); j++) {
            if ((key == "NISN" && (descending ? students[j].NISN > students[extremeIdx].NISN : students[j].NISN < students[extremeIdx].NISN)) ||
                (key == "Value" && (descending ? students[j].Value > students[extremeIdx].Value : students[j].Value < students[extremeIdx].Value))) {
                extremeIdx = j;
            }
        }
        swap(students[i], students[extremeIdx]);
    }
}

// Bubble Sort
void bubbleSort(vector<Student>& students, string key, bool descending = false) {
    for (int i = 0; i < students.size() - 1; i++) {
        for (int j = 0; j < students.size() - 1 - i; j++) {
            if ((key == "NISN" && (descending ? students[j].NISN < students[j + 1].NISN : students[j].NISN > students[j + 1].NISN)) ||
                (key == "Value" && (descending ? students[j].Value < students[j + 1].Value : students[j].Value > students[j + 1].Value))) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

// Binary Search
Student* binarySearch(vector<Student>& students, long long target) {
    sort(students.begin(), students.end(), [](Student a, Student b) { return a.NISN < b.NISN; }); // Ensure sorted by NISN
    int low = 0, high = students.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (students[mid].NISN == target) {
            return &students[mid];
        } else if (students[mid].NISN < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return nullptr; // Not found
}

// Sequential Search to Modify Names
void sequentialSearchModify(vector<Student>& students, int valueToFind, const string& newName) {
    for (Student& student : students) {
        if (student.Value == valueToFind) {
            student.Nama = newName;
        }
    }
}

// Function to display student data
void displayStudents(const vector<Student>& students) {
    for (const Student& student : students) {
        cout << "NISN: " << student.NISN << ", Nama: " << student.Nama << ", Value: " << student.Value << endl;
    }
}

int main() {
    // Initial dataset
    vector<Student> students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60},
    };

    // Sorting by NISN (Descending) using Insertion Sort
    vector<Student> sortedByNISN = students;
    insertionSort(sortedByNISN, "NISN", true);
    cout << "Sorted by NISN (Insertion Sort, Descending):" << endl;
    displayStudents(sortedByNISN);

    // Sorting by Value (Descending) using Selection Sort
    vector<Student> sortedByValue = students;
    selectionSort(sortedByValue, "Value", true);
    cout << "\nSorted by Value (Selection Sort, Descending):" << endl;
    displayStudents(sortedByValue);

    // Sorting by Value (Descending) using Bubble Sort
    vector<Student> sortedByValueBubble = students;
    bubbleSort(sortedByValueBubble, "Value", true);
    cout << "\nSorted by Value (Bubble Sort, Descending):" << endl;
    displayStudents(sortedByValueBubble);

    // Binary Search for NISN 9950310962
    Student* foundStudent = binarySearch(students, 9950310962);
    cout << "\nBinary Search Result for NISN 9950310962:" << endl;
    if (foundStudent) {
        cout << "NISN: " << foundStudent->NISN << ", Nama: " << foundStudent->Nama << ", Value: " << foundStudent->Value << endl;
    } else {
        cout << "Student not found!" << endl;
    }

    // Sequential search to modify names where Value == 60
    sequentialSearchModify(students, 60, "Joko");
    cout << "\nDataset after modifying names (Value == 60 to 'Joko'):" << endl;
    displayStudents(students);

    return 0;
}
