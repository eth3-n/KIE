#include <iostream>
#include <cmath>  // for ceil function
using namespace std;

int main() {
    double length, width, floorArea, tileArea = 0.36, tilesRequired;

    // Input dimensions
    cout << "Enter the length of the lab (in meters): ";
    cin >> length;

    cout << "Enter the width of the lab (in meters): ";
    cin >> width;

    // Calculate floor area
    floorArea = length * width;

    // Calculate number of tiles (rounded up to nearest whole tile)
    tilesRequired = ceil(floorArea / tileArea);

    // Output result
    cout << "The number of tiles required is: " << tilesRequired << endl;

    return 0;
}
