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

bool IsLess(int firstValue, int secondValue) {
	return firstValue < secondValue;
}

int Min(int first, int second) {
	if (IsLess(first, second)) {
		return first;
	}
	else {
		return second;
	}
}

void PrintMinNumber(int min) {
	Print(min, "Min number is: ");
}

int main() {

	int firstNumber = ReadNumber(InputAlert[0]);
	int secondNumber = ReadNumber(InputAlert[1]);
	PrintMinNumber(Min(firstNumber, secondNumber));

	return 0;
}
