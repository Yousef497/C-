#include <iostream>

using namespace std;

double Future_Salary(double initial_balance, double p, int n) {
	double s = initial_balance * pow(1 + p / 100, n);
	return s;
}

int main() {
	double rate;
	double initial_balance;
	int n;

	cout << "Enter the initial balance > ";
	cin >> initial_balance;

	cout << "Enter the rate > ";
	cin >> rate;

	cout << "Enter the number of years > ";
	cin >> n;

	double balance = Future_Salary(initial_balance, rate, n);
	cout << "\nYour salary after " << n << " years will be " << balance << ".\n";

	double increase_value;
	increase_value = balance - initial_balance;

	cout << "The increase value is " << increase_value << " .\n";
	

	return 0;
}