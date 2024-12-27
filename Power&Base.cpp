#include <iostream>

using namespace std;

int main(){
	unsigned base, power;
	do{
		cout << "Enter a the base of the number at range (0,30): ";
		cin >> base;	
		cout << "Enter the power of the number at range(0,30): ";
		cin >> power;
	}while(base >= 30 && power>=30);
	int result = 1;
	cout << result;
	for (int i = 0; i < power; i++)
	{
		cout << ",";
		if (power == 0)
			break;
		result = result * base;
		cout << result;


	}


}
