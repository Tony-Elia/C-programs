#include <iostream>
using namespace std;
void arrayDisplay(int[], int, bool);
void knapsackCalc(int[], int[], int, int);

int main() {
    int size;
    // declaring the base pointers of the arrays
    int* valArr;
    int* weightArr;
    int max;

    cout << "Enter the size of the array:\n";
    cin >> size;
    // initializing the arrays using the size variable
    valArr = new int[size];
    weightArr = new int[size];
    // reading the arrays of values and weights
    cout << "Enter the values: \n";
    arrayDisplay(valArr, size, 0);
    cout << "Enter the weights: \n";
    arrayDisplay(weightArr, size, 0);
    //reading the max weight
    cout << "Enter the max weight: ";
    cin >> max;
    cout << "The answer is: ";
    knapsackCalc(valArr, weightArr, max, size);

    return 0;
}

void arrayDisplay(int arr[], int size, bool out) {
    if (out) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << endl;
    }
}

int sumArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}