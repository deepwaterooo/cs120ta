#include <cstdio>
#include <cstdlib>

using namespace std;

class Card
{
public:
    Card();
    Card(int, string);

    void set(int, string);
    void random();
    void cheat();
    void print();
    
private:
    int rank;
    string suit;
};

Card::Card()
{
    rank = -1;
    suit = "NoSuit";
}

Card::Card(int x, string y)
{
    rank = x;
    suit = y;
}

Card::random()
{
    int temp = 
        rank = rand() % 14;
    //suit = ;
}


int main(int argc, char *argv[])
{
    
    return 0;
}
