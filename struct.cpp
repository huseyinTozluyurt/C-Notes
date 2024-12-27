#include <iostream>
#include <string>
using namespace std;

struct car {
	string brand;
	int yearOfProduction;
	int price;
	string currency;

}Car1, Car2, Car3;

int main() {
	

	Car1.brand = "Toyoto";
	Car1.yearOfProduction = 2008;
	Car1.price = 3000;
	Car1.currency = "$";

	Car2.brand = "TOGG";
	Car2.yearOfProduction = 2023;
	Car2.price = 400000;
	Car2.currency = "TL";//The symbol of "TL" is not included in c++ string library.

	Car3.brand = "Mercedes";
	Car3.yearOfProduction = 2020;
	Car3.price = 4000;
	Car3.currency = "€";

	cout << Car1.brand << " is produced in " << Car1.yearOfProduction << " and it worths " << Car1.price << Car1.currency<<endl;
	cout << Car2.brand << " is produced in " << Car2.yearOfProduction << " and it worths " << Car2.price << Car2.currency<<endl;
	cout << Car3.brand << " is produced in " << Car3.yearOfProduction << " and it worths " << Car3.price << Car3.currency<<endl;


	return 0;

}
