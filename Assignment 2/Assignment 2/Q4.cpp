//============================================================================
// Name        : Assignment 2
// Author      : Antonios Elia Samir
// Description : Q4
//============================================================================

#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;

void vowel(string);
bool palindrome(string);
string sentence;
int vowels = 0;
int consonants = 0;
int vowelsArr[100];
int consonantsArr[100];
int answer;
int outerIterator = 0;

int main() {
	cout << "please enter the sentence to check ";
	// reading the whole sentence
	getline(cin, sentence);
	cout << "Write 1 to count the vowels and consonants\n";
	cout << "Write 2 to check the palindrome \n";
	// getting the answer to see which function will be run
	cin >> answer;
	switch(answer) {
		case 1:
			vowel(sentence);
		case 2:
			palindrome(sentence);
		default:
			cout << "Invalid input";
	}
	return 0;
}

void vowel(string sentence) {
	// to count the sentence vowels and consonants
	int vowelsSum = 0;
	int consSum = 0;
	sentence += ' '; // achieve the break case at the end of the sentence
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] == ' ') { // to stop counting after each word and clearing the counters
			vowelsArr[outerIterator] = vowels;
			consonantsArr[outerIterator] = consonants;
			vowels = 0;
			consonants = 0;
			outerIterator++;
		}
		else if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
			vowels += 1; // adding to the vowels counter
		}
		else {
			consonants += 1; // adding to the consonants counter
		}
	}
	for (int i = 0; vowelsArr[i] > 0; i++) {
		// to type the number of vowels and cons in each word
		cout << "Word #" << i + 1 << " has " << vowelsArr[i] << " vowel(s) and " << consonantsArr[i] << " consonant(s)\n";
	}
	for (int i = 0; vowelsArr[i] > 0; i++) {
		// to count the total number of vowels and cons
		vowelsSum += vowelsArr[i];
		consSum += consonantsArr[i];
	}
	cout << "The sum of vowels :" << vowelsSum << endl;
	cout << "The sum of consonants :" << consSum << endl;

}

bool palindrome(string sentence) {
	for (int i = 0; i < sentence.length() / 2; i++) { // checking each corresponding letter with the other
		if (sentence[i] != sentence[(sentence.length() - 1) - i]) { // by inversing the start index
			return false;
		}
	}
	return true;
}