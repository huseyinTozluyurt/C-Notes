#include <iostream>
#include <climits>
using namespace std;

int main(){
	int num1, num2;
	cout << "Type the first number for adding: ";
	cin >> num1;
	cout << "Type the second number for adding: ";
	cin >> num2;

	if (num1 > INT_MAX - num2 && num2 > 0)
	{
		cerr << "Overflow occured. "; //Input 2147483647 for num1 and a positive integer for num2 to have an overflow.

	}
	else if (num1 < INT_MIN - num2 && num2 < 0) {

		cerr << "Underflow occured. ";//Input -2147483648 for num1 and a negative integer for num2 to have an underflow.

	}
	else {

		cout << "The result of adding is: "<< num1 + num2 << " (an overflow or underflow has not been detected.)";
	}




}
