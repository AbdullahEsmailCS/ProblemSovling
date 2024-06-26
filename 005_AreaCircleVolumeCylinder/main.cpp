#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

// Overloaded function to calculate the volume of a cylinder
double calculateArea(double radius, double height) {
    const float pi = 3.14;
    double area = pi * radius * radius * height;
    return(double) area ;
}

int main() {
    // Calculate area of a circle
    double circleRadius = 5.0;
    double areaCircle = calculateArea(circleRadius);
    cout << "Area of circle: " << areaCircle << endl;

    // Calculate volume of a cylinder
    double cylinderRadius = 3.0;
    double cylinderHeight = 7.0;
    double volumeCylinder = calculateArea(cylinderRadius, cylinderHeight);
    cout << "Volume of cylinder: " << volumeCylinder << endl;

    return 0;
}
