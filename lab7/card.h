/*
  Heyan Huang
  Partner: 's Name
  CS120 Section 4
  10/14/2014

  Extra Work:
  1.
  2.
  3.
*/

#include <iostream>
#include <string>

class Card
{
public:
    Card();
    Card(int, int);
    void set(int, int);
    void random();
    void cheat();
    void print();
    
private:
    int rank;
    int suit;
};

