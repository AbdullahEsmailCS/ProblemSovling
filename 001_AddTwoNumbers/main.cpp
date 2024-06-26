#include<iostream>
using namespace std;

struct TwoNumbers {
	int FirstNumber;
	int SecondNumber;
};

int ReadNumber(const string& message) {
	cout << message << endl;
	int number;
	cin >> number;
	return number;
}
int Sum(int firstValue, int secondValue) {
	return firstValue + secondValue;
}
TwoNumbers ReadTwoNumbers() {
	TwoNumbers tn;
	tn.FirstNumber = ReadNumber("Enter First Number: ");
	tn.SecondNumber = ReadNumber("Enter second Number: ");
	return tn;
}
int CalculateSummation(TwoNumbers tn) {
	return Sum(tn.FirstNumber, tn.SecondNumber);
}

void PrintSum(int sum) {
	cout << "Sumation is :" << sum << endl;
}
int main() {

	PrintSum(CalculateSummation(ReadTwoNumbers()));
	return 0;
}