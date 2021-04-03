#include<iostream>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;

    public:
    string getName() const{
        return name;
    }

    void setName(string name_val) {
        name = name_val;
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

void displayPlayerName(const Player &p) {
    cout << p.getName() << endl;
}

int main() {
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};

    cout << villain.getName() << endl;
    displayPlayerName(villain);
    return 0;
}