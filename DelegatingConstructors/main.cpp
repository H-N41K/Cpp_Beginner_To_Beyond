#include<iostream>
using namespace std;
class Player {
    private:
        string name;
        int health;
        int xp;

    public:
    string getName() {
        return name;
    }

    //Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player("None", 0, 0) {
}

Player::Player(string name_val) 
    : Player(name_val, 0, 0) {
}

Player::Player(string name_val, int health_val, int xp_val) 
    :name{name_val}, health{health_val}, xp{xp_val} {
}

int main() {
    Player empty;
    Player P1 {"Player1"};
    Player P2 {"Player2", 100, 55};

    cout << empty.getName() << endl;
    cout << P1.getName() << endl;
    cout << P2.getName() << endl;
    return 0;
}