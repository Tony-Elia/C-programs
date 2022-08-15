#include <iostream>
#include <string.h>
using namespace std;

struct bank {
	string  currency;
	long int balance;
	string type;
	int code;
};

int intro(bank*, int);
void create(bank*, int&);
void bal(bank*, int);
void show(bank*, int, int);

int main() {
	int x = 0;
	bank* acc = new bank[x];
	intro(acc, x);
}
int intro(bank* acc, int x) {
	int ans;
	cout << "1) show accounts \n2) create an account \n3) deposit or withdraw \n4) exit \n";
	cin >> ans;
	switch (ans) {
		case 1:
			show(acc, x, 0);
			break;
		case 2:
			create(acc, x);
			break;
		case 3:
			bal(acc, x);
			break;
		case 4:
			delete[]acc;
			exit(0);
		default:
			cout << "Invalid Input\n";
			intro(acc, x);
			break;
	}
	return 0;
}
void create(bank* acc, int& x) {
	int ans;
	bank* newAcc = new bank[x + 1];
	copy(acc, acc + x, newAcc);
	delete[] acc;
	acc = newAcc;
	cout << "enter currency 1-EGP 2-USD "; cin >> ans;
	if (ans == 1) {
		acc[x].currency = "EGP";
	}
	else if (ans == 2) {
		acc[x].currency = "USD";
	}
	else {
		cout << "invalid input\n";
		intro(acc, x);
	}
	cout << "enter amount you will deposit "; cin >> acc[x].balance;
	cout << "specify the type of account 1-saving 2-recurring "; ans = 0; cin >> ans;
	if (ans == 1) {
		acc[x].type = "Saving";
	}
	else if (ans == 2) {
		acc[x].type = "Recurring";
	}
	else {
		cout << "Invalid input\n";
		intro(acc, x);
	}
	acc[x].code = x;
	x++;
	show(acc, x, (x-1));
	intro(acc, x);
}
void bal(bank* acc, int x) {
	int ans, amount, code;
	cout << "please enter the account code you want to withdraw / deposit from ";
	cin >> code;
	if (code > (x-1) || code < 0) {
		cout << "Code not found" << endl;
		intro(acc, x);
	}
	cout << "choose 1-withdraw 2-deposit: ";
	cin >> ans;
	cout << "please specify amount: ";
	cin >> amount;
	if (ans == 1) {
		if (amount > acc[code].balance) {
			cout << "Not enough balance in the account\n";
			intro(acc, x);
		}
		else {
			acc[code].balance -= amount;
			cout << "The new balance " << acc[code].balance << endl;
		}
	}
	else if (ans == 2) {
		acc[code].balance += amount;
		cout << "The new balance " << acc[code].balance << endl;
		cout << acc[code].balance;
	}
	else {
		cout << "Invalid input\n";
		intro(acc, x);
	}
	intro(acc, x);
}
void show(bank* acc, int x, int y) {
	if (x != 0) {
		for (; y < x; y++) {
			cout << "======================\n";
			cout << "Code: " << acc[y].code << endl;
			cout << "Currency: " << acc[y].currency << endl;
			cout << "Balance: " << acc[y].balance << endl;
			cout << "Account type: " << acc[y].type << endl;
			cout << "======================\n";
		}
		intro(acc, x);
	}
	else {
		cout << "No accounts\n";
		intro(acc, x);
	}
}