#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Write the number to be added: ";
    cin >> num;
    if (num){
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }
        cout << sum << endl;
    } else {
        cout << "Invalid input";
    }
    return 0;
}
