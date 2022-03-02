// NAME: random_maze.cpp
// TESTING: Porting BASIC code
#include <iostream>
using namespace std;

int main() {
    int num; // initalise number
    int ticks; // edited a lil bit
    while (true){ // repeat forever
        srand(time(NULL)+ticks);
        num=rand()%2; // set num to 0 or 1
        if (num==1){ // if num is 1
            cout << "/"; // print /
        } else { // if num is 0
            cout << "\\"; // print the backslash
        }
        ticks++;
    }
}
