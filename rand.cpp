#include <iostream>
using namespace std;
// init
string ascii = "abcdefghijklmnopqrstuvwxyz0123456789"; // character set
string str = ""; // the actual string

int main(){
    cout << "Word:";
    string search; // your search
    cin >> search;
    int ticks = 0; // for rand function & loop
    int maxTicks = 100000; // how many loops it takes
    int iterations = 0; // how many strings it genertes
    int maxIters = 50; // maximum ammt of loops
    cout << "Max Characters:";
    cin >> maxTicks;
    cout << "Max Iterations:";
    cin >> maxIters;
    while (iterations<=maxIters){ // iterations
        while (ticks<=maxTicks){ // characters
            if (str.find(search)!=string::npos){ // if found: exit loop
                cout << "Found " << search << "!\n";
                break;
            }
            srand(time(NULL)+ticks); // otherwise generate a random letter
            str+=ascii[rand()%ascii.length()];
            ticks++;
        }
        if (str.find(search)!=string::npos){ // if you've found it stop itetrating
            break;
        }
        cout << iterations << "/"; // which one is it
        iterations++; // increase
        str=""; // reset
    }
    if (str.find(search)==string::npos){ // if it's not there sat this
        cout << "\nNot found.\n\n";
    }
    cout << str; // show me the string!!!!!!!!!!!!!!!!!
}
