// NAME: rpg.cpp
// TESTING: Random generation, boolean logic, user input and gameplay loops.
#include <iostream>
using namespace std;

int hp = 20; // health points
int nmehp=20; // enemy health
bool defending=false; // are you defending?

int atk_enemy(){ // attack that enemy
    srand(time(NULL)*62); // set the seed
    nmehp-=(1+rand()%5); // remove the health
    return 1; // return to main loop
}
int atk_player(){ // get hit :(
    srand(time(NULL)*59); // set the seed
    if (not defending){ // am i defending?
        hp-=(1+rand()%4); // if not, take full damage
    } else { // so i am defending.
        hp-=(1+rand()%2); // since defending is true, take less damage
    }
    defending=false; // reset defending
    return 1; // return to main loop
}

int ui(){ // show the UI
    cout << "Your HP: " << hp << " | Enemy HP: " << nmehp << "\n"; // this is the UI
    return 1; // return to main loop
}
int choose(){ // actual gameplay
    int choice = 0; // make a choice
    cout << "What do you want to do?\n1-Attack\n2-Defend\n? "; // these are your options
    cin >> choice; // get their input
    if (choice==1){ // if choice is 1
        atk_enemy(); // attack the enemy
    } else if (choice==2){ // if choice is 2
        defending=true; // defend
    } else { // if choice is neither
        choice=1; // set it to 1
    }
    return 1; // return to main loop
}

int main(){
    while (hp>0 and nmehp>0){ // while you and the enemy are alive
        ui(); // run the UI
        choose(); // choose
        atk_player(); // enemy attack
    } 
    if (hp<=0 and nmehp>0){ // if your health is depleted...
        cout << "Game Over!"; // ...you lose!
    } else if (nmehp<=0 and hp>0) { // if the enemy's health is depleted...
        cout << "You win!"; // ...you win!
    } else { // if you both died...
        cout << "It's a tie!"; // ...neither win!
    }
    cout << "Thank you for playing!"; // end the program nicely
    return 1; // get out.
}
