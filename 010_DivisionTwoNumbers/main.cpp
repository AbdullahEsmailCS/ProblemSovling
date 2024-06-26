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

bool IsEqual(int value1, int value2) {
	return value1 == value2;
}

bool IsZero(int value) {
	return IsEqual(value, 0);
}

bool IsSecondNumberZero(int result) {
	if (IsEqual(result, -1)) {
		return true;
	}
	else {
		return false;
	}
}

int Divide(int firstValue, int secondValue) {
	if (IsZero(secondValue)) {
		return -1;
	}
	else {
		return firstValue / secondValue;
	}

}

void PrintDivision(int div) {
	Print(div, "Division is :");
}

void PrintResult(int result) {
	if (IsSecondNumberZero(result)) {
		cout << "Can not divide by zero";
	}
	else {
		PrintDivision(result);
	}
}

int main() {

	int firstNumber = ReadNumber(InputAlert[0]);
	int secondNumber = ReadNumber(InputAlert[1]);
	int result = Divide(firstNumber, secondNumber);
	PrintResult(result);
	 
	return 0;
}
