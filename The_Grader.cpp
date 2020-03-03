#include<iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
	int accumalated;

	cout << "Enter the Total Amount of points accumalated (0 to 10) by student  ";
	cin >> accumalated;
	cout << endl;

	switch (accumalated)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Final Grade is F  " ;
		cout << endl;
		break;
	case 6:
		
		cout << "Final Grade is D  ";
		cout << endl;
		break;
	case 7:
		cout << "Final Grade is C  ";
		cout << endl;
		break;
	case 8:
		cout << "Final Grade is B  ";
		cout << endl;
		break;
	case 9:
		cout << "Final Grade is A  ";
		cout << endl;
		break;
	case 10:
		cout << "Final Grade is A+  ";
		cout << endl;
		break;
    default :
		cout << "Invalid Entry\n";
	}


	
	system("pause");
	return 0;
}