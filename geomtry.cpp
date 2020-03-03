#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

const double PI = 3.1416;

int main()
{
	double point1X, point1Y;
	double point2X, point2Y;
	double distance;
	double sphereRadius;
	double sphereVolume;

	cout << "Enter the radius of the sphere:  ";
	cin >> sphereRadius;
	cout << endl;

	sphereVolume = (4.0 / 3) * PI * pow(sphereRadius, 3);

	cout << "The volume of the sphere is:  "
		<< sphereVolume << endl << endl;
	cout << "Enter the coordinates of two "
		<< "points in the X-Y plane: ";
	cin >> point1X >> point1Y >> point2X >> point2Y;
	cout << endl;

	distance = sqrt(pow(point2X - point1X, 2)
		+ pow(point2Y - point1Y, 2));

	cout << "The distance between the points "
		<< "(" << point1X << ", " << point1Y << ") and "
		<< "(" << point2X << ", " << point2Y << ") is: "
		<< distance << endl << endl;



	string str;

	str = "Programming with c++";

	cout << "The number of characters, "
		<< "including blanks, in programming with c++ is : "
		<< str.length() << endl;

	system("pause");
	return 0;
}