#include <iostream>
#include <string>
using namespace std;
bool num_less(string str1, string  str2);

int main() {
    string str1, str2;
    cout << "Write the first string: ";
    cin >> str1;
    cout << "Write the second string: ";
    cin >> str2;
    cout << num_less(str1, str2);
    return 0;
}

bool num_less(string str1, string str2) {
    string str1_numbers, str2_numbers;
    // looping on the first string to catch the numbers
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] < 58 && str1[i] > 47) {
            str1_numbers += str1[i];
            str1.erase(i, 1);
            i--;
        }
    }
    // looping on the second string to catch the numbers
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] < 58 && str2[i] > 47) {
            str2_numbers += str2[i];
            str2.erase(i,1);
            i--;
        }
    }
    // comparing
    if (str1 == str2){
        if (str1_numbers.back() == str2_numbers.back()) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
