// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0;
    double b = 0;
    int inta = a;
    int intb = b;
    int op = 0;
    cout << "Number 1 ";
    cin >> a;
    cout << "\nNumber 2 ";
    cin >> b;
    cout << "\nOperation\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Min\n7. Max\n8. Root\n9. Exit\nOperation:";
    cin >> op;
    if (op==1){
        cout << a << "+" << b << "=" << a+b << "\n";
    }
    if (op==2){
        cout << a << "-" << b << "=" << a-b << "\n";
    }
    if (op==3){
        cout << a << "x" << b << "=" << a*b << "\n";
    }
    if (op==4){
        cout << a << "/" << b << "=" << a/b << "\n";
    }
    if (op==5){
        cout << a << "^" << b << "=" << pow(a,b) << "\n";
    }
    if (op==6){
        if (a<b){
            cout << a << "\n";
        } else if (b<a){
            cout << b << "\n";
        } else {
            cout << a << "=" << b << "\n";
        }
    }
    if (op==7){
        if (a>b){
            cout << a << "\n";
        } else if (b>a){
            cout << b << "\n";
        } else {
            cout << a << "=" << b << "\n";
        }
    }
    if (op==8){
        cout << pow(a,(1/b))<<"\n";
    }
    else {
        cout << "Bye\n";
        return 0;
    }
}










// haha funny number 69
