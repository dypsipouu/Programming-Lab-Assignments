#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

// Function to solve the quadratic equation
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = (b * b) - (4 * a * c);
    double sqrtDiscriminant;

    // If discriminant is positive, two distinct real roots
    if (discriminant > 0) {
        sqrtDiscriminant = sqrt(discriminant);
        double x1 = (-b + sqrtDiscriminant) / (2 * a);
        double x2 = (-b - sqrtDiscriminant) / (2 * a);
        cout << "Two distinct real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    // If discriminant is zero, one real root
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "One real root: x = " << x << endl;
    }
    // If discriminant is negative, complex roots
    else {
        sqrtDiscriminant = sqrt(-discriminant);
        complex<double> x1((-b / (2 * a)), (sqrtDiscriminant / (2 * a)));
        complex<double> x2((-b / (2 * a)), -(sqrtDiscriminant / (2 * a)));
        cout << "Complex roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}

// Test cases for quadratic equation solver
void testQuadraticSolver() {
    // Test Case 1: Two distinct real roots
    cout << "Test Case 1:" << endl;
    solveQuadraticEquation(1, -3, 2); // Expected: x1 = 2, x2 = 1
    cout << endl;

    // Test Case 2: One real root
    cout << "Test Case 2:" << endl;
    solveQuadraticEquation(1, -2, 1); // Expected: x = 1
    cout << endl;

    // Test Case 3: Complex roots
    cout << "Test Case 3:" << endl;
    solveQuadraticEquation(1, 2, 5); // Expected: complex roots
    cout << endl;

    // Test Case 4: Two distinct real roots
    cout << "Test Case 4:" << endl;
    solveQuadraticEquation(1, 5, 6); // Expected: x1 = -2, x2 = -3
    cout << endl;
}

int main() {
    // Run Quadratic Equation Solver Tests
    testQuadraticSolver();
    return 0;
}
