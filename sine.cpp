#include <iostream>
#include <cmath>
using namespace std;

int ticks = 0;
int sine = 0;
int wait = 0;

int main(){
    while(true){
        ticks++;
        sine=round(sin(ticks)*3);
        if (sine==-3){
            cout << "#       \n";
        } else if (sine==-3){
            cout << " #      \n";
        } else if (sine==-2){
            cout << "  #     \n";
        } else if (sine==-1){
            cout << "   #    \n";
        } else if (sine==0){
            cout << "    #   \n";
        } else if (sine==1){
            cout << "     #  \n";
        } else if (sine==2){
            cout << "      # \n";
        } else if (sine==3){
            cout << "       #\n";
        } else {
            cout << "!!!!!!!!\n";
        }
        wait = 0;
        while (wait<=25000000){
            wait++;
        }
        }
}
