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

bool IsGreater(int firstValue, int secondValue) {
	return firstValue > secondValue;
}

int Max(int first, int second) {
	if (IsGreater(first, second)) {
		return first;
	}
	else {
		return second;
	}
}

void PrintMaxNumber(int max) {
	Print(max, "Max number is: ");
}


 

 
int main() {

	int firstNumber = ReadNumber(InputAlert[0]);
	int secondNumber = ReadNumber(InputAlert[1]);
	PrintMaxNumber(Max(firstNumber, secondNumber));

	return 0;
}
