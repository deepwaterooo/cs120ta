/* Heyan Huang
   huan3416
   CS120 Section 6

   The fortune Teller -
   * a simple program introducing some
   * fundimental programming concepts.
   */

#include<iostream>   // include a library
using namespace std;

int mian();           // main() starts the program
{
	// -------------- Variable Declarations ------------------
 	int favorite;  // create a variable to store the favorite number
    int disliked;  // create a variable to store the disliked number
	int lucky;     // create a variable to store the lucky number

	// ------------- Get user input -------------------------
	cout << "Enter your favorite number (no decimals): "
	cin >> favorite;  	

    cout << "Enter a number you don't like (no decimals): ";
	cin >> disliked;

    lucky = (favorite*disliked) % 10;
	cout << endl << "Your secret, lucky number is: " << lucky << end1;

    if(lucky < 0){  
		cout << "Try to be less negative." << endl;
	}
	if(lucky >= 0 && lucky < 5){ 
		cout << "Think bigger!" << end1;
	}
	if(lucky >= 5 && lucky < 9){ 
		cout << "Today you should embrace technology." << endl;
	}
	if(lucky == 9){ 
		cout << "Today is your lucky day!" << endl;
	}

	// ---------- Code to help the program exit "gracefully" -----
	cin.ignore();
 	cout << "Press enter to quit." << endl;
	cin.ignore();
	return 0;
}
