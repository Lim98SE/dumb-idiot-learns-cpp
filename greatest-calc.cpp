// i only make calculators now
#include <iostream>
#include <cmath>
using namespace std;
// Initalise libraries or whatever they're called I'm a Python guy so I call them libraries

string opString = "\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Power\n6: Root\n7: Bitwise AND\n8: Bitwise OR\n9: Bitwise XOR\n10: Bitwise NOT\n11: Bitwise Shift Left\n12: Bitwise Shift Right\nWhat is your choice? "; // string that tells you your options
int operation;

int a;
int b;
int sum;
// defining variables
int main(){
    goto choose; // jump to the "goto" label
    add: // add
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=a+b; // solution to error 😎
        cout << "\n" << a << " + " << b << " = " << sum << "\n";
        goto choose; // return to main loop
    subtract: // guess
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=a-b;
        cout << "\n" << a << " - " << b << " = " << sum << "\n";
        goto choose;
    mult:
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=a*b;
        cout << "\n" << a << " x " << b << " = " << sum << "\n";
        goto choose;
    divide:
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=a/b;
        cout << "\n" << a << " / " << b << " = " << sum << "\n";
        goto choose;
    power:
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=pow(a,b);
        cout << "\n" << a << " to the power of " << b << " = " << sum << "\n";
        goto choose;
    root:
        cout << "Number 1:";
        cin >> a;
        cout << "\nNumber 2:";
        cin >> b;
        sum=pow(a,1.0/b); // get the root of A
        cout << "\n" << a << " to the " << b << " root is " << sum << "\n";
        goto choose;
    bitwise: // bitwise label
        if (operation==7){ // check the operation number and do the right operation
            cout << "Number 1: ";
            cin >> a;
            cout << "\nNumber 2: ";
            cin >> b;
            sum = a&b;
            cout << "\n" << a << "&" << b << " = " << sum << "\n";
        }
        if (operation==8){
            cout << "Number 1: ";
            cin >> a;
            cout << "\nNumber 2: ";
            cin >> b;
            sum = a|b;
            cout << "\n" << a << "|" << b << " = " << sum << "\n";
        }
        if (operation==9){
            cout << "Number 1: ";
            cin >> a;
            cout << "\nNumber 2: ";
            cin >> b;
            sum = a^b;
            cout << "\n" << a << "^" << b << " = " << sum << "\n";
        }
        if (operation==10){
            cout << "Number: ";
            cin >> a;
            sum = ~a;
            cout << "\n" << "NOT " << a << " = " << sum << "\n";
        }
        if (operation==11){
            cout << "Number 1: ";
            cin >> a;
            cout << "\nNumber 2: ";
            cin >> b;
            sum = a<<b;
            cout << "\n" << a << "<<" << b << " = " << sum << "\n";
        }
        if (operation==12){
            cout << "Number 1: ";
            cin >> a;
            cout << "\nNumber 2: ";
            cin >> b;
            sum = a>>b;
            cout << "\n" << a << ">>" << b << " = " << sum << "\n";
        }
        goto choose;
    choose:
        cout << "Operations:" << opString;
        cin >> operation;
        if (operation==1){
            goto add;
        } else if (operation==2){
            goto subtract;
        } else if (operation==3){
            goto mult;
        } else if (operation==4){
            goto divide;
        } else if (operation==5){
            goto power;
        } else if (operation==6){
            goto root;
        } else if (operation>6 and operation<=12){
            goto bitwise;
        } else {
            cout << "\nGoodbye";
        }
}
