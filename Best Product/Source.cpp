#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector<string> names; vector<double> prices; vector<int> scores;

	double best_price = 1;
	int best_score = 0;
	int best_index = -1;
	bool more = true;

	while (more) {
		string next_name; double next_price; int next_score;

		cout << "Please enter the model name: ";
		getline(cin, next_name);
		names.push_back(next_name);

		cout << "Please enter the model price: ";
		cin >> next_price;
		prices.push_back(next_price);

		cout << "Please enter the model score: ";
		cin >> next_score;
		scores.push_back(next_score);

		string remainder; // read remainder of line
		getline(cin, remainder); // Dummy step for getline function to work correctly

		if ((next_score / next_price) > (best_score / best_price)) {
			best_index = names.size() - 1;
			best_score = next_score;
			best_price = next_price;
		}

		string answer;
		cout << "\nMore data? (y/n)";
		getline(cin, answer);
		cout << endl;
		if (answer == "n")
			more = false;

	}

	cout << endl;

	for (int i = 0; i < names.size(); i++) {
		if (i == best_index) {
			cout << "Model number: " << names[i] << "	Price: " << prices[i] << ",	Score: " << scores[i] << " <= Best Product" << endl;
		}
		else {
			cout << "Model number: " << names[i] << "	Price: " << prices[i] << ",	Score: " << scores[i] << endl;
		}
	}

	return 0;
}