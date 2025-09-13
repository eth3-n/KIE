#include <iostream>
#include <cmath>   // for sqrt() and setprecision
#include <iomanip> // for fixed and setprecision

using namespace std;

int main() {
    double a, b, c, s, area;

    // Input the sides
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    // Calculate semi-perimeter
    s = (a + b + c) / 2.0;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display result rounded to 3 decimal places
    cout << fixed << setprecision(3);
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
