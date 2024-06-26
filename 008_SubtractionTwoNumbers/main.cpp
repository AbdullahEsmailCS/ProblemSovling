#include<iostream>
#include<string>
using namespace std;

const string InputAlert[] = { "Enter first Number", "Enter second Number" };

void Print(const string& message) {
	cout << message << endl;
}
void Print(int value,string title ="") {
	cout<<title << value << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	return number;
}

int Subtract(int firstValue, int secondValue) {
	return firstValue - secondValue;
}

void PrintSubtraction(int sub) {
	Print(sub, "Subtraction is :");
}

int main() {

	int firstNumber = ReadNumber(InputAlert[0]);
	int secondNumber = ReadNumber(InputAlert[1]);


	PrintSubtraction(Subtract(firstNumber, secondNumber));
	return 0;
}
