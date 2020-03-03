#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

const double PI = 3.1416;
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;


int main()
{
	int feet, inches;
	int totalInches;
	double x1, y1;
	double x2, y2;
	double DIST;
	double r;
	double Vol;
	char V, D, L, K, P, v, d, l, k, p;
	char user = 0;
	string  NUM;

	cout << " Choose V to calculate volume of radious, \n  D for disteance of two cordinates, \n  L for calculate number of characters, \n K for conversion of feet and inch, ";

	cout << " Please enter your choice: " << user;
	cin >> user;
	cout << endl;

	if (user == 'V' || user == 'v') {
		cout << "Enter the radius of the sphere:  ";
		cin >> r;
		cout << endl;

		Vol = (4.0 / 3) * PI * pow(r, 3);

		cout << "The volume of the sphere is:  "
			<< Vol << endl << endl;
	}

	else if (user == 'D' || user == 'd') {
		cout << "Enter the coordinates of two "
			<< "points in the X-Y plane: ";
		cin >> x1 >> y1 >> x2 >> y2;
		cout << endl;

		DIST = sqrt(pow(x2 - x1, 2)
			+ pow(y2 - y1, 2));

		cout << "The distance between the points "
			<< "(" << x1 << ", " << y1 << ") and "
			<< "(" << x2 << ", " << y2 << ") is: "
			<< DIST << endl << endl;
	}

	else if (user == 'L' || user == 'l') {

		cout << "Enter the radius of the sphere:  ";
		cin >> NUM;
		cout << endl;


		//NUM = "Programming with c++";

		cout << "The number of characters, "
			<< "including blanks, in programming with c++ is : "
			<< NUM.length() << endl;

	}
	else if (user == 'K' || user == 'k') {
		cout << "Enter two integers, one for feet and "
			<< "one for inches: ";                  //Step 1
		cin >> feet >> inches;                      //Step 2
		cout << endl;

		cout << "The numbers you entered are " << feet
			<< " for feet and " << inches
			<< " for inches. " << endl;        //step 3

		totalInches = INCHES_PER_FOOT * feet + inches;     //Step 4

		cout << "The total number of inches = "
			<< totalInches << endl;                 //step 5

	}

	else
	{
		cout << " Envalid Choice" << endl;
	}

	system("pause");
	return 0;
}