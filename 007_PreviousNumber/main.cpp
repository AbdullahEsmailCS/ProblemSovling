#include<iostream>
using namespace std;

int ReadNumber(const string& message) {
	cout << message << endl;
	int number;
	cin >> number;
	return number;
}

int Sub(int firstValue, int secondValue) {
	return firstValue - secondValue;
}

int GetPreviousNumber(int number) {
	return Sub(number, 1);
}
void PrintPreviousNumber(int pre) {
	cout << "Previous Number: " << pre << endl;
}


int main() {

	PrintPreviousNumber(GetPreviousNumber(ReadNumber("Enter a Number to find the previous one !")));

	return 0;
}