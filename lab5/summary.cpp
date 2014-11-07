/*
  heyan huang
  partner: dflkjgjkll
  
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x = 0;
    int i = 1;
    
    while (x != 10)
        {
            cout << "i: " << i++;
            cout << "here" << endl;
            x = x + 2;
        }
    //    cout << "x: " << x << endl;
    cout << endl << endl;

    i = 1;
    x = 0;
    do {
        cout << "i: " << i++;
        cout << "here" << endl;
        x++;
    } while (x < 10);
    
    /*    
          for(int i = 1; i <= n; ++i)
          {
          fact = Factorial(n);
          cout << fact << endl;
          }
    */
    return 0;
}
