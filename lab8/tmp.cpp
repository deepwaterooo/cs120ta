#include <iostream>
using namespace std;

class BitSet {
public:
    BitSet();
    void insertIntoSet(int);
    void deleteFromSet(int);
    bool isInBitSet(int);
private:
    int mArray[4];
};

BitSet::BitSet() {
    for(int i = 0; i < 4; i++)
        mArray[i] = 0;
}

void BitSet::insertIntoSet(int x) {
    if (!isInBitSet(x))  {
        mArray[x / 32] += ( 1 << (x % 32));
    }
}

void BitSet::deleteFromSet(int x) {
    if (isInBitSet(x))
        mArray[x / 32] ^= ( 1 << (x % 32));
}

bool BitSet::isInBitSet(int x) {
    int tmp = mArray[x / 32];
    tmp >>= (x % 32);
    if (tmp & 1 == 1)
        return true;
    return false;
}

int main(int argc, char *argv[]) {
    int x = 63;
    BitSet a;
    a.insertIntoSet(x);
    a.deleteFromSet(x);
    cout << a.isInBitSet(x);
    
    return 0;
}
