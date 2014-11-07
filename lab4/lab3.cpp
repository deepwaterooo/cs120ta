#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << (7 < 8 ) << endl;
    cout << (10 > 10) << endl;
    cout << ((7 < 10) || (7 > 10)) << endl;
    cout << ((7 < 10) && (7 > 10)) << endl;
    cout << (-5 >= 5) << endl;
    cout << endl;
    cout << ((7 > 10) || (-5 == 5)) << endl;
    cout << (!(6 == 7)) << endl;
    cout << ((10 != 11) && (7 > 8) ) << endl;
    cout << ((7 == 6) || (7 == 7) || (7 == 8)) << endl;
    cout << ((6 < (8 && 9)) ) << endl;
    cout << endl;
    cout << ((1 == (6 < 8)) ) << endl;
    cout << ((0 == (0 || 1))) << endl;
    cout << ( 6 < (5 + 2)) << endl;
    cout << (6 + (5 == 5)) << endl;
    cout << ((6 < 7) + (7 >= 5)) << endl;
									    
    return 0;

}
