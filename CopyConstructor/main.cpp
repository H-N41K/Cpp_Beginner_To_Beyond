#include<iostream>
#include<string>

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

    int getHealth() {
        return health;
    }

    int getXp() {
        return xp;
    }

    //Constructor
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);

    //Copy Constructor
    Player(const Player &source);

    //Destructor
    ~Player() {cout << "Destructor called for:" << name << endl; }
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    }

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp} {
        cout << "Copy constructor - made a copy of: " << source.name << endl;
    }


void display_player(Player p) {
    cout << "Name: " << p.getName() << endl;
    cout << "Health: " << p.getHealth() << endl;
    cout << "XP: " << p.getXp() << endl;
}

int main() {
    Player empty;
    Player P1 {"Player1"};
    Player P2 {"Player2", 100, 55};

    display_player(empty);
    display_player(P1);
    return 0;
}