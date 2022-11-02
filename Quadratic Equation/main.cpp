#include <iostream>
#include "cmath"
using namespace std;

void quadraticEquation(double, double, double);

int main() {
    int a;
    int b;
    int c;

    cout<<"Input the values of a, b, and c: ";
    cin >> a >> b >> c;
    quadraticEquation(a, b, c);

    return 0;
}

void quadraticEquation(double a, double b, double c) {
    double x1;
    double x2;

    double discriminant = pow(b, 2) - (4 * a * c);
    x1 = (-b + pow(discriminant, .5)) / (2 * a);
    x2 = (-b - pow(discriminant, .5)) / (2 * a);

    while (a != 0) {
        if (discriminant > 0) {
            cout << "Real and Distinct roots!" << endl;
            cout << "The roots are: " << x1 << " and " << x2;
        } else if (discriminant < 0) {
            cout << "Imaginary roots";
        } else {
            cout << "Equal roots";
            cout << "x1 = x2: " << x1;
        }
        exit(0);
    }
}