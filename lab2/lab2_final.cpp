/**
   Aurthor:	Anup Chitrakar
   Modified:   Heyan Huang
   Date:		September 08, 2014
   CS120 Lab 2
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	//Constant pi declaration
	const double pi = 3.14159;
	
	//Variables to store radius and height
	double radius, height;
	
	//Variables to store calculated volume and surface area for cylinder
	double cylVol, cylArea;
	
	//Variables to store calculated volume and surface area for cone
	double coneVol, coneArea;
	
	//Variables to store calculated volume and surface area for sphere
	double sphereVol, sphereArea;
	
	//Ask for user inputs
	cout << "Enter values for radius and height: ";
	cin >> radius >> height;
	
	/*For Cylinder*/
	//Calculation Logics - to calculate volume and surface area
	cylVol = pi * pow(radius, 2) * height;	
	cylArea = 2* pi * radius * (radius + height);

	/*For circular Cone*/
	//coneVol = (pi * pow(radius, 2) * height) / 3;	
	coneVol = cylVol / 3;	
	coneArea = pi * radius * (radius + sqrt(pow(radius, 2) + pow(height, 2)));
	
	/*For Sphere*/
	sphereVol = (4 * pi * pow(radius, 3) ) / 3;	
	sphereArea = 4* pi * pow(radius, 2);
		
	//Output the calculated values to user
	cout << endl << "For a right circular cylinder: " << endl;
	cout << "    The volume is:                          " << cylVol << endl;
	cout << "    The surface area is:                    " << cylArea << endl;
	cout << "    The ratio of volume to surface area is: " << (cylVol / cylArea) << endl;

	cout<< endl << "For a right circular cone: " << endl;
	cout << "    The volume is:                          " << coneVol << endl;
	cout << "    The surface area is:                    " << coneArea << endl;
	cout << "    The ratio of volume to surface area is: " << (coneVol / coneArea) << endl;
	
	cout<< endl << "For a sphere: " << endl;
	cout << "    The volume is:                          " << sphereVol << endl;
	cout << "    The surface area is:                    " << sphereArea << endl;
	cout << "    The ratio of volume to surface area is: " << (sphereVol / sphereArea) << endl;	
	
	return 0;
}
