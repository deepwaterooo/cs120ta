#include <iostream>
using namespace std;

// implement ADD 5
// using two ways to implement ADD 5
// variable scope
// pass-by-reference
// pass pointers

void AddFive(int Number) {
    Number = Number + 5;
}

int main() {
    int nMyNumber = 18;
    cout<<"My original pointed value is "<< nMyNumber <<endl;
    
    AddFive(nMyNumber);
    cout<<"My new number is "<< nMyNumber <<endl;

    return 0;
} 
