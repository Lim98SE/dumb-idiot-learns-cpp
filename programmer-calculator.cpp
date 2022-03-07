#include <iostream>
using namespace std;
// initalise program

int main(){ // main function
    cout << "Programmer Calculator\n"; // title card
    int a; // define variables
    int b;
    calc: // calc label
        cout << "?";
        cin >> a;
        cout << "\n?";
        cin >> b;
        // get inputs
        int buffer = a&b; // ok so c++ was giving me an error and this made the error go away so it's good enough
        cout << a << " AND " << b << " = " << buffer << "\n";
        buffer = a|b;
        cout << a << " OR " << b << " = " << buffer << "\n";
        buffer = a^b;
        cout << a << " XOR " << b << " = " << buffer << "\n";
        buffer = ~a;
        cout << "NOT " << a << " = " << buffer << "\n";
        buffer = ~b;
        cout << "NOT " << b << " = " << buffer << "\n";
        buffer = a << b;
        cout << a << " shifted left " << b << " places is " << buffer << "\n";
        buffer = b << a;
        cout << b << " shifted left " << a << " places is " << buffer << "\n";
        buffer = a >> b;
        cout << a << " shifted right " << b << " places is " << buffer << "\n";
        buffer = b >> a;
        cout << b << " shifted right " << a << " places is " << buffer << "\n";
        // ALL THE BITWISE
    while (true){
        goto calc;
        // you're stuck here forever
    }
}
