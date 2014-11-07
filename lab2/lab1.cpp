/* Heyan Huang
   CS120 Section 4
   huan3416
  
  The fortune Teller -
 * a simple program introducing some
 * fundimental programming concepts.
 */

#include<iostream> 
using namespace std;

int main()  
{
    int favorite;  
    int disliked;  
    int lucky;     

    // insert greeting message here
    cout << "Hi, there! Welcome to the Fortune Teller~~ Good Luck!" << endl;
    cout << "Enter your favorite number (no decimals): ";  
    cin >> favorite; 
    cout << "Enter a number you don't like (no decimals): ";
    cin >> disliked;

    // Modified the foutune by using a different number
    lucky = (favorite * disliked) % 15;
    cout << endl << "Your secret, lucky number is: " << lucky << endl;

    if (lucky < 0) {  
        cout << "Try to be less negative." << endl;
    }
    if (lucky >= 0 && lucky < 5) { 
        cout << "Think bigger!" << endl;
    }
    if (lucky >= 5 && lucky < 9) { 
        cout << "Today you should embrace technology." << endl;
    }
    if (lucky == 9) {
        cout << "Today is your lucky day!" << endl;
    }

    // added category because of the updated range
    if (lucky > 9 && lucky < 15) {    
        cout << "God bless you!" << endl;
    }

    cin.ignore();
    cout << "Press enter to quit." << endl;
    cin.ignore();

    return 0;
}
