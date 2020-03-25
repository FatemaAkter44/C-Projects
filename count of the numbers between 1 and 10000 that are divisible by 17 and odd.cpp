#include<iostream>
using namespace std;

bool isDivisibleBy(int num, int divisor) {
	// function returns true if num is divisible by divisor
	if (num % divisor == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool isEven(int num) {
	// function returns true if num is odd
	if (isDivisibleBy(num, 2)) {
		return true;
	}
	else {
		return false;
	}
}


int main() 
{

	int count = 0;

	// count of the numbers between 1 and 10000 that are divisible by 17 and odd

	for (int i = 1; i <= 1000000; i++) {
		if ( isDivisibleBy(i,13) || isDivisibleBy(i,17) || isDivisibleBy(i,19) ) {
			if (isEven(i)) {
				count++;
			}
		}
  }
	

cout << "count of numbers that match the conditions: " << count << endl;

return 0;
}
