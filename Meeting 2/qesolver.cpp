#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double x1, x2;

    cout << fixed << setprecision(2);

    if (discriminant > 0) {
        // Two distinct real roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two distinct real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        // One real root
        x1 = -b / (2 * a);
        cout << "The equation has one real root: x = " << x1 << endl;
    } else {
        // No real roots (complex roots)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The equation has complex roots: x1 = " << realPart << " + " << imaginaryPart << "i, x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    // Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Solve the quadratic equation
    solveQuadraticEquation(a, b, c);

    return 0;
}
