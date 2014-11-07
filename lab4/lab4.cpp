/*
  CS120 Lab 4 Section 6
  Heyan Huang
  Sep 23, 2014
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int fact;
    float e;
    for (int i = 0; i < 5; ++i)
	{
	    for (int j = 0; j <= i; ++j)
		{
		    if (j == 0)
			fact = 1;
		    else
			fact *= j;
		}
	    e += 1.0/fact;
	    cout << i << " \t " << e << endl;
	}

    return 0;
}
