#include <iostream>
#include "CursWin.h"

int main(int argc, char *argv[])
{
    CursWin outw(0, 0, 20, 39);
    //outw.PlaceWin(0, 0, 20, 39);

    //cout << "Hello World~" << endl;
    outw << "Hello World~" << cendl;

    int myInput;
    outw >> myInput;
    outw << "You input " << myInput << "!" << cendl;
    
    std::cin.ignore();

    // conio.h
    
    return 0;
}
