#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player {

public: string name;
    int health;
    int xp;

    void talk(string msg){
        cout << name << " says : " << msg << endl;
    }
};

int main() {
    Player P1,P2;
    P1.name = "Qwerty";
    P1.xp = 999;

    cout << P1.name << endl;
    cout << P1.xp << endl;
    P1.talk("Hello");

    Player *enemy = new Player();
    enemy->name = "Enemy";
    enemy->xp =1001;

    cout << enemy->name << endl;
    cout << enemy->xp << endl;
    enemy->talk("I will destroy you!");

    return 0;
}