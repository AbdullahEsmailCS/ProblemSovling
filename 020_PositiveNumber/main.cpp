#include<iostream>
#include<string>
using namespace std;

const string InputNumberAlert = "Enter a Number to check if positive or negative ";

bool CheckIsTrue(bool t) {
	if (t)
		return true;
	else
		return false;
}

void Print(const string& m, bool IsEndLineAllowed = true) {
	if (CheckIsTrue(IsEndLineAllowed)) {
		cout << m << endl;
	}
	else {
		cout << m << " ";
	}

}

void Print(const string& title, const string& value, bool isEndLine = true) {
	if (CheckIsTrue(isEndLine)) {
		cout << title << " " << value << endl;
	}
	else {
		cout << title << " " << value << " ";
	}
}

int ReadNumber(const string& m) {
	Print(m);
	int number;
	cin >> number;
	return number;
}

bool IsGreater(int firstValue, int secondValue) {
	return firstValue > secondValue;
}

bool IsGreaterThanZero(int value) {
	return IsGreater(value, 0);
}

bool IsPositiveNumber(int number) {
	return IsGreaterThanZero(number);
}

string GetNumberStatus(bool flag) {
	if (CheckIsTrue(flag)) {
		return "It is Positive Number ";
	}
	else {
		return "It is Negative Number ";
	}
}

void PrintNumberStatus(const string& s) {
	Print(s);
}

int main() {


	PrintNumberStatus(GetNumberStatus(IsPositiveNumber(ReadNumber(InputNumberAlert))));

	return 0;
}