#include <iostream>
using namespace std;

class robot
{
public:
    robot(int);
    void refresh(){moved = 0;};
    void draw();
    void print();
    void move(int &, int &);
private:
    int direction;
    int energy;
    int id;
    int moved;
    void turnLeft();
    void turnRight();
    void forward(int &x, int &y);
};

robot::robot(int x) {
    energy = 50;
    id = x;
    moved = 0;
    direction = 0;
}

void robot::draw() {
    cout << "#";
}

void robot::print() {
    cout << "id " << id << ": Energy = " << energy << "  direction = " << direction;
}

void robot::move(int &x, int &y) {
    if (moved == 1) {
        return;
    }
    switch (rand() % 4) {
    case 0:
        turnLeft();
        break;
    case 1:
        turnRight();
        break;
    case 2:
    case 3:
        forward(x,y);
        break;
    default:
        cout << "Error in robot move." << endl;
    }
    moved = 1;
}

void robot::turnLeft() {
    energy--;
    direction = (direction + 3) % 4;
}

void robot::turnRight() {
    energy--;
    direction = (direction + 1) % 4;
}

void robot::forward(int &x, int &y) {
    energy -= 2;
    if (direction == 0)
        y--;
    if (direction == 2)
        y++;
    if (direction == 1)
        x++;
    if (direction == 3)
        x--;
}
