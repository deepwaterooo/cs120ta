#include <iostream>
#include <cmath>

using namespace std;

int myCharToInt(char src)  {
    int result;
    switch(src) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        result = src - '0';
        break;
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
        result = src - 'A' + 10;
        break;
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
        result = src - 'a' + 10;
        break;
    default:
        result = 999;
        break;
    }
    return result;
}

int basetoint(string src, int base) {
    int result = 0;
    int len = src.size();

    if (base < 2 || base > 16)
        return-1;
    int i = src.size() - 1;  // i for the power value of base
    while(i >= 0) {
        if (myCharToInt(src[len-1-i]) >= base)
            return -1;
        result += myCharToInt(src[len-1-i]) * pow(base, i);
        i--;
    } 
    return result;
}

/*
  int basetoint(string src, int base) {
  int result = 0;

  if (base < 2 || base > 16)
  return-1;
    
  for (int i = 0; i < src.size(); ++i) {
  /*
  if (base <= 10 && myCharToInt(src[i]) >= base)
  return -1;
*//*
    if (myCharToInt(src[i]) >= base)
    return -1;
            
    result = result * base + myCharToInt(src[i]);
    }
    return result;
    }
  */
int main() {
    int val, base, result;
    string strng;
    while(1) { // This creates an infinite loop, use <ctrl>-C to get out {
        cout << "Enter a string of digits, followed by a base ";
        cin >> strng >> base;
        result = basetoint(strng, base);
        if(result < 0) cout << "An error occurred" << endl;
        else cout << "The result is " << result << endl;
    } // END while
} // END main
