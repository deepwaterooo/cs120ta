#include <iostream>
#include <cstdlib>
#include <ctime>
#include "robot.h"
#include "world.h"

using namespace std;

int main(int argc, char *argv[]) {
    world wor;
    srand(time(NULL));
    wor.set_up();
    do {
        wor.update();
        wor.draw();
        cin.ignore();
    } while (1);
    return 0;
}
