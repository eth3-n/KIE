#include <iostream>
using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.14159;

    // Prompt user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate volume
    volume = PI * radius * radius * height;

    // Display result
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
