#include <iostream>
using namespace std;

const int NumberOfNumbers = 3;

// Define a struct for holding three numbers
struct ThreeNumbers {
    int FirstNumber;
    int SecondNumber;
    int ThirdNumber;

    // Constructor to initialize the struct
    ThreeNumbers(int first, int second, int third) : FirstNumber(first), SecondNumber(second), ThirdNumber(third) {}
};

// Function to read a number from input with a message prompt
int ReadNumber(const string& message) {
    cout << message << ": ";
    int number;
    cin >> number;
    return number;
}

// Function to calculate sum of two numbers
int Sum(int firstValue, int secondValue) {
    return firstValue + secondValue;
}

// Function to calculate sum of three numbers
int Sum(int firstValue, int secondValue, int thirdValue) {
    return firstValue + secondValue + thirdValue;
}

// Function to read three numbers and return as a ThreeNumbers struct
ThreeNumbers ReadThreeNumbers() {
    int first = ReadNumber("Enter First Number");
    int second = ReadNumber("Enter Second Number");
    int third = ReadNumber("Enter Third Number");
    return ThreeNumbers(first, second, third);
}

// Function to calculate summation of numbers in a ThreeNumbers struct
int CalculateSum(const ThreeNumbers& numbers) {
    return Sum(numbers.FirstNumber, numbers.SecondNumber, numbers.ThirdNumber);
}

bool IsEqual(int first, int second) {
    return first == second;
}
bool IsZero(int value) {
    return IsEqual(value, 0);
}

float Divide(float firstValue, float secondValue) {
    if (IsZero(secondValue)) {
        return -1;
   }
    else {
        return (float)firstValue / secondValue;
    }
}

// Function to calculate the average of three numbers
float CalculateAvg(int sum, int no) {
    return (float)Divide(sum,no);
}

// Function to print the sum
void Print(int sum) {
    cout << "Sumation is: " << sum << endl;
}
void Print(float avg) {
    cout << "Average is: " << avg << endl;
}

// Main function
int main() {
    // Read three numbers, calculate their sum, and print the result
    ThreeNumbers numbers = ReadThreeNumbers();
    int sum = CalculateSum(numbers);
    Print(sum);
    Print(CalculateAvg(sum, NumberOfNumbers));

    return 0;
}
