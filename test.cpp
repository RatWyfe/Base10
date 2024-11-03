#include <iostream>
#include <fstream> 
#include <vector> 
#include <string>
#include <cmath>
using namespace std;

int main() {
	int counter = 0;
	int asking = 0;
	int ask = 0;
	int constant = 0;
	string buildstr;
	cin >> ask;
	string line;
	cout << "type Base64 or SemiUTF-8\n";
	string filename;
	string borus;
	bool boru= false;
	cin >> borus;
	if (borus == "Base64") {
		boru = true;
	}
	if (borus == "SemiUTF-8") {
		boru = true;
	}
	if (boru) {
		ifstream fil(borus);
		while (getline(fil, line)) {
			constant++;
		}
		fil.close();
		while (not (ask == 0)) {
			counter = 0;
			asking = ask - (floor(ask / constant)) * constant;
			ask = floor(ask / constant);
			ifstream fil(borus);
			while (getline(fil, line)) {
				if (asking == counter) {
					cout << line;
					buildstr = line + buildstr;
				}
				counter++;
			}
			fil.close();
		}
		cout << "\n";
		cout << buildstr;
	}
	return 0; 
}