#include <iostream>

using namespace std;

int main()

{
	double num1, num2, num3;
	double average;

	num1 = 125;
	num2 = 28;
	num3 = -25;

	cout << "the number for num1: " << num1 << endl;
	cout << "the number for num2: " << num2 << endl;
	cout << "the number for num2: " << num3 << endl;


	average = (num1 + num2 + num3) / 3;
	cout << "the average in this situation is: " << average << endl;
	system("pause");
	return 0;
}