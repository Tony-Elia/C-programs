#include <iostream>
#include <climits>
using namespace std;

void displayArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
int knapSack(int values[], int weights[], int n, int maxNum) {
    if (maxNum < 0)
        return INT_MIN;
    if (n == 0 || maxNum == 0) // base case
        return 0;
    int in = values[n] + knapSack(values, weights, n - 1, maxNum - weights[n]); // in case we use it
    int out = knapSack(values, weights, n - 1, maxNum); // in case we didn't
    return max(in, out); // returning the maximum between them
}
int main() {
    // initializing the pointers of the arrays with the variables
    int* values;
    int* weights;
    int size;
    int max;

    cout << "Enter the size of the array: ";
    cin >> size;
    // creating the arrays
    values = new int[size];
    weights = new int[size];
    // reading the arrays from the user
    cout << "Enter the values: ";
    displayArr(values, size);
    cout << "Enter the weights: ";
    displayArr(weights, size);
    cout << "Enter the maximum weight: ";
    cin >> max;

    cout << "Knapsack value is " << knapSack(values, weights, size - 1, max);

    return 0;
}