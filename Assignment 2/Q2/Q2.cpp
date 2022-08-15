#include <iostream>

void checkMatMultip(int x1, int y1, int x2, int y2);
void calMatMultip(int x1, int y1, int x2, int y2);
using namespace std;
int main() {

    // Task 2
    /*
     * A programme to Find The multiplication of 2 arrays
     * */
    int x1, y1, x2, y2;
    cout << "Please enter the first matrix dimensions :\n";
    cin >> x1 >> y1;
    cout << "Please enter the second matrix dimensions :\n";
    cin >> x2 >> y2;

    checkMatMultip(x1, y1, x2, y2);

    return 0;
}

void checkMatMultip(int x1, int y1, int x2, int y2) {
    if (y1 != x2)
        cout << "Unfortunately, "
        "multiplication is not applicable for given dimensions";
    else
        calMatMultip(x1, y1, x2, y2);
}
void calMatMultip(int x1, int y1, int x2, int y2) {
    // Create first array
    int** arr1 = new int* [x1];
    for (int i = 0; i < x1; ++i) {
        arr1[i] = new int[y1];
    }
    cout << "Please enter the first matrix:\n";
    for (int i = 0; i < x1; ++i) {
        for (int j = 0; j < y1; ++j) {
            cin >> arr1[i][j];
        }
    }

    // Create Second array
    int** arr2 = new int* [x2];
    for (int i = 0; i < x2; ++i)
        arr2[i] = new int[y2];
    cout << "Please enter the second matrix:\n";
    for (int i = 0; i < x2; ++i) {
        for (int j = 0; j < y2; ++j) {
            cin >> arr2[i][j];
        }
    }
    cout << "The result of multiplication is: \n";
    for (int i = 0; i < x1; ++i) {
        for (int j = 0; j < y2; ++j) {
            int sum = 0;
            for (int k = 0; k < x2; ++k) {
                sum += arr1[i][k] * arr2[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}