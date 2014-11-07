#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 3, j =7, k = 9;
    float r = 1.5, s = 9.0, t = 18.0;
    int m, n, p;
    float v, w;

    m = j / k * 5;
    cout << "m: " << m << endl;

    n = s / t * r;
    cout << "n: " << n << endl;

    p = (5 * i) % (k + 2);
    cout << "p: " << p << endl;

    v = j / k * 5;
    cout << "v: " << v << endl;
    
    w = sqrt(s) * 5. / r + 2;
    cout << "w: " << w << endl;
        
    return 0;
}

