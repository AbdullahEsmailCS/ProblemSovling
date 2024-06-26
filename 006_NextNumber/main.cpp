#include<iostream>
using namespace std;

int ReadNumber(const string& message) {
	cout << message << endl;
	int number;
	cin >> number;
	return number;
}

int Add(int firstValue, int secondValue) {
	return firstValue + secondValue;
}

int GetNextNumber(int number) {
	return Add(number, 1);
}
void PrintNextNumber(int next) {
	cout << "Next Number: " << next << endl;
}


int main() {

	PrintNextNumber(GetNextNumber(ReadNumber("Enter a Number to find the next one !")));

	return 0;
}