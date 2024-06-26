#include<iostream>
#include<string>
using namespace std;

const string InputAlert[] = { "Enter first Number", "Enter second Number" };

void Print(const string& message) {
	cout << message << endl;
}
void Print(int value, string title = "") {
	cout << title << value << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	return number;
}

int Multiply(int firstValue, int secondValue) {
	return firstValue * secondValue;
}

void PrintMultiplication(int mul) {
	Print(mul, "Multiplication is :");
}

int main() {

	int firstNumber = ReadNumber(InputAlert[0]);
	int secondNumber = ReadNumber(InputAlert[1]);


	PrintMultiplication(Multiply(firstNumber, secondNumber));
	return 0;
}
