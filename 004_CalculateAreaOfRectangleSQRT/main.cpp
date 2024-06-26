#include <iostream>
using namespace std;

int ReadIntegerNumber(const string& message) {
    cout << message << endl;
    int number;
    cin >> number;
    return number;
}

// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

// Overloaded function to calculate the area of a square (special case of rectangle)
int calculateArea(int side) {
    return side * side;
}

void PrintArea(int area, const string& text) {
    cout << text << " :" << area << endl;
}

int main() {
    // Calculate area of a rectangle
    int length = ReadIntegerNumber("Enter length of a rectangle");
    int width = ReadIntegerNumber("ُEnter the width of rectangle");
    int side = ReadIntegerNumber("ُEnter the side of square");
    int areaRectangle = calculateArea(length, width);
    PrintArea(areaRectangle, "Area of Rectangle is");

    // Calculate area of a square

    int areaSquare = calculateArea(side);
    PrintArea(areaSquare, "Area of Square is");

    return 0;
}
