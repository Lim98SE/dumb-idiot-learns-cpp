// NAME: limcalc.cpp
// TESTING: I/O and math
#include <iostream>
using namespace std;

int main() {
    // LimCalc 1.0
    // Created by Lim95 2022
    double a;
    double b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "\n"; 
    cout << a << " + " << b << " = " << a+b << "\n";
    cout << a << " - " << b << " = " << a-b << "\n";
    cout << b << " - " << a << " = " << b-a << "\n";
    cout << a << " x " << b << " = " << a*b << "\n";
    cout << a << " ÷ " << b << " = " << a/b << "\n";
    cout << b << " ÷ " << a << " = " << b/a << "\n";
}
