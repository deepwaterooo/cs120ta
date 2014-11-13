#include <iostream>
using namespace std;

int main() {
    int nNumber;
    int *pPointer;

    nNumber = 15;
    pPointer = &nNumber;

    cout << "address of nNumber is equal to :" << (&nNumber) <<endl;
    cout << "the value of pPointer is:       " << pPointer << endl;
    cout << "the value of address where pPointer points to is " << (*pPointer) << endl;
    
    *pPointer = 25;
    cout<<"nNumber is equal to :"<< nNumber <<endl;

    return 0;
}
