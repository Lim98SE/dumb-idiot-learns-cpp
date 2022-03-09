#include <iostream>
#include <cmath>
using namespace std;

string alpha1="+-";
string alpha2="# ";
string alpha3="@.";
int type = 1;
int set = 0;

int main(){
    cout << "VISUALISER 1.0\n";
    int ticks = 0;
    cout << "Character sets:\n1 - " << alpha1 << "\n2 - " << alpha2 << "\n3 - " << alpha3 << "\n>>";
    cin >> set;
    cout << "Visualisation:\n1 - Random\n2 - Grid\n3 - NOT\n4 - Sin\n>>";
    cin >> type;
    while (true){
        ticks++;
        srand(time(NULL)+ticks);
        if (type==1){
            if (set==1){
                cout << alpha1[rand()%2];
            } else if (set==2){
                cout << alpha2[rand()%2];
            } else if (set==3){
                cout << alpha3[rand()%2];
            }
        }
        else if (type==2){
            if (set==1){
                cout << alpha1[ticks%2];
            } else if (set==2){
                cout << alpha2[ticks%2];
            } else if (set==3){
                cout << alpha3[ticks%2];
            }
        } else if (type==3){
            if (set==1){
                cout << alpha1[~ticks];
            } else if (set==2){
                cout << alpha2[~ticks];
            } else if (set==3){
                cout << alpha3[~ticks];
            }
        } else if (type==4){
            if (set==1){
                cout << alpha1[round(sin(ticks)*2)];
            } else if (set==2){
                cout << alpha2[round(sin(ticks)*2)];
            } else if (set==3){
                cout << alpha3[round(sin(ticks)*2)];
            }
        }
    }
}
