#include <iostream>
#include <cmath> // for sqrt()

using namespace std;

int main() {
    double a, b, c, D, x1, x2;

    // Input coefficients a, b, and c
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Calculate the determinant (discriminant)
    D = (b * b) - (4 * a * c);

    cout << "Determinant (D) = " << D << endl;

    // Case 1: D > 0, real and distinct roots
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    // Case 2: D == 0, real and equal roots
    else if (D == 0) {
        x1 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    // Case 3: D < 0, imaginary roots
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
