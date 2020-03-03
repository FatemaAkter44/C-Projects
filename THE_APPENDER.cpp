#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	char ch;
	cout << " Enter name to be decrypted ";

	cin.get(ch);
	cout << ch ;

	cin.get(ch);
	cout << ch;

	cin.putback(ch);

	cin.get(ch);
	cout << ch;
    
	cin.putback('M');
	cin.get(ch);
	cout << ch ;
	// first part iim complite here

	cin.putback('i');
	cin.get(ch);
	cout << ch;

	cin.get(ch);
	cout << ch;

	
	cin.putback('M');
	cin.get(ch);
	cout << ch;

	cin.putback('i');
	cin.get(ch);
	cout << ch;

	cin.putback('r');
	cin.get(ch);
	cout << ch ;

    cin.get(ch);
	cout << ch;

	cin.get(ch);
	cout << ch;


	cin.putback('i');
	cin.get(ch);
	cout << ch;


	cin.get(ch);
	cout << ch << endl;

	system("pause");

	return 0;


}
