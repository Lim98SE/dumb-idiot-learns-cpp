// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    std::string name = "hey"; // define a string named name
    std::cout << "what's your name? ";
    std::cin >> name; // get user input for what the chance should be
    std::cout << "hi "+name+"\n"; // string manipulation is easy apparently
    int age = 0; // set an integer named age
    std::cout << "how old are you "+name+"? "; // ask how old they are
    std::cin >> age; // define an integer named age
    std::string strage = std::to_string(age); // convert age to string
    std::string job = ""; // define a string named job
    std::cout << name+" what do you do for fun? "; // we need this data
    std::cin >> job; // please give us all your data
    std::cout << "so your name is "+name+" and you are "+strage+" years old and your hobby is "+job+"\ncool\n\nlets send this data off to facebook"; // noooo mark zuckerburg
}