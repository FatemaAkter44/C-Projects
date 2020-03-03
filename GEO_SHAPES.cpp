#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	char shape, first_name, last_name;
	double length, width, height, area;


	cout << "Please enter your First name, and last name: " << endl;
	cin >> first_name >> last_name;
	cout << endl;


	cout << "Whatkind of geometric figure is? \nPlease enter R-Rectangle     T-Triangle     Z-Trapeze: ";
	cin >> shape;
	cout << endl;

	if (shape == 'r' || shape == 'R')
	{
		cout << "Please enter the length and width of the rectangle: ";
		cin >> length >> width;
		area = length * width;
	}


	else if (shape == 't' || shape == 'T')
	{
		cout << "Please enter the base and heigth of the triangle: ";
		cin >> length >> height;
		area = (length*height) / 2;
		
	}
	  

			else if (shape == 'z' || shape == 'Z')
			{
				cout << "Please enter the large base, small base and heigth of the trapeze: ";
				cin >> length >> width >> height;
				area = (length + width)*(height / 2);
				
			}
		
		else
		{
			cout << "Please made a nvalid selection" << endl;
			
		}


	cout << "Thank You " << first_name << " " << last_name << endl;
	cout << " The calculated area is " << area << " square ft" << endl;


	system("pause");
	return 0;
}