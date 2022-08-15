#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 6; i++) {
		for (int x = 0; x <= i; x++) {
			cout << "*";
		}
	}
	return 0;
}