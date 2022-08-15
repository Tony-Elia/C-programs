//Name: Amr Emad-Eldin, ID: 20216074
//Name: Antonios ELia Samir, ID: 20216142

#include <iostream>
#include <cmath>

using namespace std;

//The structure that holds the complex number
struct ComplexNumber
{
    double real1, real2,
        img1, img2;
};

//the addition function
void addition(ComplexNumber& cn)
{
    cout << "\nThe sum of the two complex numbers: " << endl << "(" << cn.real1 << "+" << cn.img1 << "i) + (" << cn.real2 << "+" << cn.img2 << "i)"

        << "=" << cn.real1 + cn.real2 << "+" << cn.img1 + cn.img2 << "i";
}

//the subtraction function
void subtraction(ComplexNumber& cn)
{
    cout << "\n\nThe subtraction of the two complex numbers: \n"
        << "(" << cn.real1 << "+" << cn.img1 << "i) - (" << cn.real2 << "+" << cn.img2 << "i)";
    cout << "=" << cn.real1 - cn.real2 << "+ (" << cn.img1 - cn.img2 << "i)";
}

//the multiplication
void multiplication(ComplexNumber& cn)
{
    cout << "\n\nThe product of the two complex numbers: \n"
        << " (" << cn.real1 << "+" << cn.img1 << "i) x (" << cn.real2 << "+" << cn.img2 << "i) "

        << "= " << (cn.real1 * cn.real2) - (cn.img1 * cn.img2) << "+" << (cn.img1 * cn.real2) + (cn.img2 * cn.real1) << "i";
}

//the division function
void division(ComplexNumber& cn)
{
    cout << "\n\nThe division of the two complex numbers: \n"
        << " (" << cn.real1 << "+" << cn.img1 << "i) / (" << cn.real2 << "+" << cn.img2 << "i) "

        << "= (" << ((cn.real1 * cn.real2) + (cn.img1 * cn.img2)) / (pow(cn.real2, 2) + pow(cn.img2, 2))

        << ") + (" << ((cn.img1 * cn.real2) - (cn.img2 * cn.real1)) / (pow(cn.real2, 2) + pow(cn.img2, 2)) << ")i";
}

//the main() function
int main()
{
    int x;
    ComplexNumber cn;

    cout << "Enter the real and imaginary value of the first complex number\n";
    cin >> cn.real1 >> cn.img1;
    cin.ignore();

    cout << "\nEnter the real and imaginary value of the second complex number\n";
    cin >> cn.real2 >> cn.img2;
    cin.ignore();
    cout << endl << "Please choose a desirable operation:" << endl;
    cout << "1) Addition" << endl << "2) Subtraction" << endl << "3) Multiplication" << endl << "4) Division" << endl;
    cin >> x;
    cout << " " << endl;
    switch (x) {
    case 1:
        addition(cn); //perform addition
        break;
    case 2:
        subtraction(cn); //perform subtraction
        break;
    case 3:
        multiplication(cn); //perform multiplication
        break;
    case 4:
        division(cn); //perform division
        break;
    default:
        cout << "Error, Please enter a valid number" << endl;
        break;
    }
    cin.get();
    return 0;
}