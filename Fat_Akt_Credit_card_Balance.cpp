#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double payment, balance, minDue;
	const double interest = 0.05, add_interest = 1.10, penalty = 0.05, add_penalty = 1.05;

	cout << fixed << showpoint << setprecision(2);

	cout << "Hello, wellcome to citycard.The credit card payments are:" << endl;
	cout << "The interest rate is 5% of total amount" << endl;
	cout << "The minimum payment is 20% of the balance.No panalty." << endl;
	cout << " late payment =  $75 late fee + 5% added to the balance." << endl << endl;
	cout << "Please enter the credit card balance: $";
	cin >> balance;
	minDue = balance * .2;
	cout << "The minimum payment is: $" << minDue << endl;
	cout << "Please enter the payment: $";
	cin >> payment;
	cout << endl << endl;
	balance = balance - payment;

	if (payment >= minDue)
	{
		cout << "The current balance is $" << balance << endl;
		cout << "the balance with Interest will be  $" << balance * interest << endl;
		balance = balance * add_interest;
		minDue = balance * .20;
		cout << "The new balance for next month is $" << balance << endl;
		cout << "The minimum payment due is $" << minDue;
	}
	else
	{
		cout << "The current balance is $" << balance << endl;
		cout << "The penalty to be added is $" << balance * penalty << " plus a $75 late fee" << endl;
		balance = (balance*add_penalty) + 75;
		cout << "Interest to be added is $" << balance * interest << endl;
		balance = balance * add_interest;
		minDue = balance * .20;
		cout << "The balance for next month is $" << balance << endl;
		cout << "The minimum payment is $" << minDue;
	}

	cout << endl << endl;

	system("pause");
	return 0;
}