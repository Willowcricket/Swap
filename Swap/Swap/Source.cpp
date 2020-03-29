#include <iostream>

using namespace std;

void normalTrans(int x, int y);
void hackTrans(int& x, int& y);

int main() {
	int joesBank = 150;
	int terroristBank = 1000;

	cout << "Original Bank Balances\n";
	cout << "Joe's Coffee Shop: " << joesBank << "\n";
	cout << "Terrorist Account: " << terroristBank << "\n\n";

	cout << "Normal Transaction\n";
	normalTrans(joesBank, terroristBank);
	cout << "Joe's Coffee Shop: " << joesBank << "\n";
	cout << "Terrorist Account: " << terroristBank << "\n\n";

	cout << "Hacked Transaction\n";
	hackTrans(joesBank, terroristBank);
	cout << "Joe's Coffee Shop: " << joesBank << "\n";
	cout << "Terrorist Account: " << terroristBank << "\n";

	return 0;
}

void normalTrans(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void hackTrans(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}