#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	// Initiated message
	cout << "This is base 215=10";
	cout << "\n";
	cout << "Decimal or string?(D/S):";
	cout << "\n";

	int collect = 0;

	bool ToF = false;
	bool ToS = false;
	bool end = false;

	string BuildString;
	string input;
	string FileName;
	string line;

	cin >> input;

	// This is for Decimal conversion
	if (input == "D") {
		string ToO;
		cout << "Would you like to convert to base215/base10(215/10):";
		cout << "\n";
		cin >> ToO;
		ToS = false;
		if (ToO == "10") {
			ToF = false;
		}
		if (ToO == "215") {
			ToF = true;
		}
	}
	else {
		if (input == "S") {
			// This is for String conversion
			string ToO;
			cout << "Would you like to convert to base215/base10(215/10):";
			cout << "\n";
			cin >> ToO;
			ToS = true;
			if (ToO == "10") {
				ToF = false;
			}
			if (ToO == "215") {
				ToF = true;
			}
		}
		else {
			return 1;
		}
	}

	// Here we will convert the values, but string values cannot be interpreted as is for now the best way to do it will be seperating characters with " "
	cout << "Enter your input:";
	cout << "\n";
	if (ToS) {
		// Collect our string value
		string collects;
		cin >> collects;
		collect = stoi(collects);
	}
	else {
		if (not ToS) {
			// Collect our integer value
			cin &gt;&gt; collect;
		}
	}

	// Crap, now we need to conver it, first we will have a constant file
	int countlines = 0;
	ifstream bst("SemiUTF-8");
	While (getline(bst, line)) {
		countlines++;
	}

	bst.close();

	int finalV = collect;

	if (bst) {
		While (End)
		{
			ifstream bst("SemiUTF-8");
			int converted = 0;
			int counter = 0;
			converted = finalV - (floor(finalV / countlines) * countlines);
			finalV = floor(finalV / countlines);
			While (getline(bst, line)) {
				if (converted == counter) {
					BuildString = line + BuildString;
				}
				counter++;
			}
			bst.close();
		}
	}
	cout &lt;&lt; BuildString;
	return 3;
	cout << "Are you satisfied?";
	cin &gt;&gt; BuildString;
}
