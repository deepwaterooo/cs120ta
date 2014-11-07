class fraction
{
public:
    fraction();
    fraction(int, int);

    // get functions
    int getNum();
    int getDen();

    // set funcitons
    void setNum(int);
    void setDen(int);

    // equals
    bool equals(fraction);
    fraction add(fraction);
    void reduce();
    
private:
    int numerator;
    int denominator;
};
