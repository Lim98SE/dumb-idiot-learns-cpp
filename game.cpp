#include <iostream>
using namespace std;

int main() {
    cout << "LOCKER\n\nGuess the numbers from the clues!\n\n"; // intro
    int lives; // decare all the variables
    int num1;
    int num2;
    int num3;
    lives=3;
    string combo;
    srand(time(NULL)); // seed
    num1=rand()%9; // random
    srand(time(NULL)+4); // seed
    num2=rand()%9; // random
    srand(time(NULL)*6); // seed
    num3=rand()%9; // random
    combo=to_string(num1)+to_string(num2)+to_string(num3); // set it to a string
    //combo="447"; // debug
    cout << "The first number is 6 more than " << num1-6 << "\n"; // clue
    cout << "The second number is half of " << num2*2 << "\n"; // clue
    cout << "The third number is the square root of " << num3*num3 << "\n"; // clue
    while (lives>0){ // game loop
        cout << "You have " << lives << " lives left\n"; // you need to know this
        string guess; // set a variable named guess
        cin >> guess; // get the guess variable
        if (guess==combo){ // check if it's the combo
            cout << "You win!\n"; // WOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
            return 0; // exit program
        } else { // you suck
            cout << "Not quite...\n"; // hahahahahahahahahhahahahahahahahahahaahahah
            lives--; // remove a life
        }
    }
    cout << "You lose! The combo was " << combo; // YOU REALLY SUCK >:(
}

// NOTE TO SELF: PORT THIS TO MS-DOS HELL YEAH