#include "ccc_time.h"
#include <iostream>
#include <windows.h>

using namespace std;

void print_time(Time t) {
	cout << t.get_hours() << ":";
	if (t.get_minutes() < 10)
		cout << "0";
	cout << t.get_minutes() << ":";
	if (t.get_seconds() < 10)
		cout << "0";
	cout << t.get_seconds();
}

void main() {

	for (; ; ) {
		Time now;
		cout << "Now: ";
		print_time(now);
		cout << "\n";
		Sleep(1000);
		system("CLS");
	}

}