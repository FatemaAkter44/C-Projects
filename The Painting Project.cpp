#include <iostream>

using namespace std;

const double flatpaint = 30, semigloss = 35, gloss = 28;
//const double argent_labour_per_hour = 80, contract_per_hour_labour = 60;
const int gallon = 400;   // 400 sqft can cover by 1 gallon
const int one_hour = 150; // 150 sqft can paint in one hour


int main()
{
	double L1, W1, H1, room_sqft, num_win, win_L1, win_W1, room_Win_sqft, room_area, paint_cost, labour_cost;
	double total_area = 0;
	char name[100];
	int i, count, total_room, num_coats, paint, paint_type, need_labour, argent_labour;

	cout << " Buterfly.inc" << endl;
	cout << " 420 7th ave, Brooklyn, NY, 11223" << endl;
	cout << " Buterfly@gamil.com" << endl;
	cout << " Phone: 347 348 3489" << endl;
	cout << endl;
	cout << " DATE: " << __DATE__ << endl;
	cout << "CUSTOMER NAME: ";
	//cin >> name;
	cin.get(name, 100);

	cout << endl;

	cout << " How many room do you have?  ";
	cin >> total_room;
	cout << endl;
	count = 1;

	for (i = 1; i <= total_room; i++)
	{

		cout << "Enter the Length, Width, and Height for each wall for the room " << count << " :";
		cin >> L1 >> W1 >> H1;
		cout << endl;
		room_sqft = (W1 * H1 + L1 * H1) * 2;
		// cout << room1_sqft;


		cout << "How many windows do you have in room" << count << " : ";
		cin >> num_win;
		cout << endl;

		if (num_win >= 1) {
			cout << "Enter the length, and width of window(s): ";
			cin >> win_L1 >> win_W1;
			cout << endl;
			room_Win_sqft = win_L1 * win_W1 * num_win;

			//cout << "The measurement of the winddow(s) in first bedroom is: " << win_L1 * win_W1 * num_win << endl;

			room_area = room_sqft - room_Win_sqft;
			cout << "Area to be painted for Room " << count << ": " << room_area << " sqft" << endl;
		}
		else {
			room_area = room_sqft;
			cout << "Area to be painted for Room " << count << " : " << room_area << " sqft" << endl;
		}

		++count;
		total_area += room_area;
	}

	cout << "total_area: " << total_area << endl;



	cout << "Please choose paint you like to use from bellow.\n     1 for flatpaint (per galon=$30),\n     2 for semigloss (per galon= $35),\n     3 for gloss (per galon = $28) ";
	cout << "Please Enter your number: ";
	cin >> paint_type;
	cout << "How many coats do you want to apply? ";
	cin >> num_coats;
	cout << endl;
	// 1 gallon can cover 400 sqft
	if (paint_type == 1) {
		paint = (total_area / gallon) * num_coats;
		cout << "Paint need :  " << paint << "Galon" << endl;
		paint_cost = paint * flatpaint;
		cout << "Total cost for using Flatpaint: $ " << paint_cost;
	}
	else if (paint_type == 2) {

		paint = (total_area / gallon) * num_coats;
		cout << "Paint need :  " << paint << "Galon" << endl;
		paint_cost = paint * semigloss;
		cout << "Total cost for using Flatpaint: $ " << paint_cost;
	}
	else if (paint_type == 3) {
		paint = (total_area / gallon) * num_coats;
		cout << "Paint need :  " << paint << "Galon" << endl;
		paint_cost = paint * gloss;
		cout << "Total cost for using Flatpaint: $ " << paint_cost << endl;
	}
	else
	{
		cout << "please Choose a valid option." << endl;
	}

	cout << " Do you need labour? please, enter 1 for 'yes' or 2 for 'no' :  ";
	cin >> need_labour;
	cout << endl;

	if (need_labour == 1)
	{
		cout << " Do you need argent labour ($80 per hour)?,\n or Contract for the work done in a month ($60 per hour)." << endl;
		cout << "please, enter 1 for 'need argent labour' or 2 for 'contract' :  ";
		cin >> argent_labour;
		cout << endl;

		if (argent_labour == 1) {
			// 150 sqft can cover in 1 hour. total area / 150 = this * labour cost per hour
			labour_cost = (total_area / one_hour) * 80;
			cout << "Total Argent labour cost will be: " << labour_cost << endl;
			cout << " Total due: $ " << paint_cost + labour_cost << endl;

		}
		else {
			labour_cost = (total_area / one_hour) * 60;
			cout << "Regular Total labour cost will be: " << labour_cost << endl;
			cout << " Total due: $ " << paint_cost + labour_cost << endl;
		}

	}

	else
	{

		cout << " Total due: $ " << paint_cost * 1 << endl;
	}
	cout << " Thank you for doing buesness with us";



	system("pause");
	return 0;

}
