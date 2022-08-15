#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int studData[4][4]{ {0, 0} };
    double quizAvg[4];
    double studAvg[4];
    double average = 0.0;
    const int width = 8;

    for (int i = 0; i < 4; i++) {
        studData[i][0] = i + 1;
    }
    // taking the input from the user and getting the average
    for (int i = 0; i < 4; i++) {
        average = 0;
        for (int j = 1; j < 4; j++) {
            cout << "Student #" << i + 1 << " Quiz #" << j << ": ";
            cin >> studData[i][j];
            average += studData[i][j];
        }
        average /= 3.0;

        studAvg[i] = average;
    }
    for (int i = 1; i < 4; i++) {
        average = 0;
        for (int k = 0; k < 4; k++) {
            average += studData[k][i];
        }
        average /= 4.0;
        quizAvg[i] = average;
    }
    // displaying the matrix
    cout << "Student    Quiz1     Quiz2     Quiz3     Avg/Student" << endl;
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 4; k++) {
            cout << setw(width) << studData[i][k];
        }
        cout << fixed << setprecision(1);
        cout << setw(width + 2) << studAvg[i] << endl;
    }
    cout << setw(width) << "Avg/Quiz";
    for (int i = 1; i < 4; i++) {
        cout << setw(width) << quizAvg[i];
    }
    return 0;
}