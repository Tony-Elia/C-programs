#include <iostream>
using namespace std;

int main() {
    int triBase;
    cin >> triBase;
    if (triBase){
        for(int i = triBase; i > 0; i--){
            for(int x = 1; x <= i; x++){
                cout << x;
            }
            cout << endl;
        }
    } else {
        cout << "Invalid";
    }
    return 0;
}
