#include <iostream>
#include <string>
using namespace std;
 
int getSize(string d){
    int size = 0;
    for (int i = 0; d[i] != '\0'; i++){
        size++;
    }
    return size;
}

int getDigit(char number){
    return ((int(number) - 48) * 2) % 10 + ((int(number) - 48) * 2 / 10);
}

string getPrefix(string number, int k){
    return number.substr(0, k);
}

bool prefixMatched(string num, int d){
    if (getPrefix(num, getSize(to_string(d))) == to_string(d)){
        return true;
    } else {
        return false;
    }
}
int sumOfOddPlace(string num){
    int oddSum = 0;
    for (int i = getSize(num )- 1; i > -1; i -= 2){
        oddSum += (int(num[i]) - 48);
    }
    return oddSum;
}
int sumOfDoubleEvenPlace(string num){
    int evenSum = 0;
    for (int i = getSize(num) - 2; i > -1; i -= 2){
        evenSum += (int(num[i]) - 48) * 2 % 10 + int((int(num[i]) - 48) * 2 / 10);
    }
    return evenSum;
}

void isValid(string num){
    if (getSize(num) < 13 || getSize(num) > 16 || (prefixMatched(num, 4) != 1 && prefixMatched(num, 5) != 1 && prefixMatched(num, 6) != 1 && prefixMatched(num, 37) != 1)){
        cout << "Invalid card number";
    } else {
        if ((sumOfDoubleEvenPlace(num) + sumOfOddPlace(num)) % 10 != 0){
            cout << "Invalid card number" << endl;
        } else {
            cout << "Valid card number" << endl;
        }
    }
}

int main(){
    string num;
    cout << "Enter the your card number: ";
    cin >> num;
    isValid(num);
    return 0;
}
