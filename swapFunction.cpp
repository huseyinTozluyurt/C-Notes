#include <iostream>
#include <string>
using namespace std;

void swapFunction(int &x, int &y) {
	int z = x;
	x=y;
	y= z;
}

int main() {
		
	int num1, num2;
	cout << "Type the first number to swap"<<endl;
	cin >> num1;
	cout << "Type the second number to swap" << endl;
	cin >> num2;

	swapFunction(num1,num2);
	cout << "The swapped version of your numbers \t ->" << "Num1: " << num1 << "\t->" << "Num2: " << num2;

return 0;

}
