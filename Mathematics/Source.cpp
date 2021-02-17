#include <iostream>
#include <Windows.h>

using namespace std;

// A program to display the multiples of any number you enter

int main() {

	int multiple[12];
	int multiplier[12];
	int table;

	cout << "Enter the number that you want to calculate its multiples > ";
	cin >> table;
	
	for (int i = 0; i < 12; i++) {
		
		multiplier[i] = i + 1;
		multiple[i] = (i + 1) * table;

		cout << table << " x " << multiplier[i] << " = " << multiple[i] << endl;

	}

	Sleep(5000);

	return 0;
}