#include <iostream>
#include <string>
using namespace std;

int main()
{
	string flight;
	int ticket_price;
	int sales_price;
	int num_of_passenger;
	int profit_per_passenger;
	int AGTOM;
	int agency_profit;

	cout << "Please enter ticket price  ";
	cin >> ticket_price;
	cout << endl;

	cout << "Please enter sales price  ";
	cin >> sales_price;
	cout << endl;

	cout << "Please enter the number of passengers  ";
	cin >> num_of_passenger;
	cout << endl;

	profit_per_passenger = sales_price - ticket_price;
	cout << "Profit per Passenger =  " << profit_per_passenger << endl;

	cout << "Is the flight DOM or INT ?";
	cin >> flight;
	cout << endl;

	if (flight == "DOM") {
		AGTOM = (sales_price - ticket_price) * num_of_passenger *0.5;
		agency_profit = (sales_price - ticket_price) * num_of_passenger - AGTOM;
		cout << "Agents commisson = " << AGTOM << " and agency profit = " << agency_profit << endl;
	}

	else if (flight == "INT" && profit_per_passenger >= 60) {

		AGTOM = (sales_price - ticket_price) * num_of_passenger *0.5;
		agency_profit = (sales_price - ticket_price) * num_of_passenger - AGTOM;
		cout << "Agents commisson = " << AGTOM << " and agency profit = " << agency_profit << endl;
	}

	else if (flight == "INT" && profit_per_passenger < 60) {
		AGTOM = (profit_per_passenger - 30)  * num_of_passenger;
		agency_profit = (sales_price - ticket_price) * num_of_passenger - AGTOM;
		cout << "Agents commisson = " << AGTOM << " Agency receives = " << agency_profit << endl;
	}

	else {
		cout << "INVALID TYPE, PLEASE ENTER DOM or INT" << endl;

	}
	system("pause");
	return 0;
}