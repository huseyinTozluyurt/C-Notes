#include <iostream>
#include <string>
using namespace std;


template <typename A>
class Calculator{
public:
	A add(A num1, A num2) {
		return num1 + num2;
	}

	A subtract(A num1, A num2) {
		return num1 - num2;
	}
};


template <>
class Calculator<string>{
public:
	string add(string num1, string num2) {
		return num1 + num2;
	}
	string subtract(string num1, string num2) {
		int len1 = num1.length();
		int len2 = num2.length();
		int len3;
		if (len1 >= len2)
			len3 = len1;
		else if (len1 < len2)
			len3 = len2;
		string diff(len3,' ');
		for (int i = 0; i < len3;i++ ) {
			char element1,element2;
			if (i >= len1)
				element1 = 0;
			else
				element1 = num1[i];
			if (i >= len2)
				element2 = 0;
			else
				element2 = num2[i];

			if (element1 >= element2)
				diff[i] = element1 - element2 + '0';
			else if (element1 < element2) {
				diff[i] = element2 - element1 + '0';
			}

		}
		return diff;

	}

};




int main() {

  Calculator<int> myCalculator;
	int intSum=myCalculator.add(2,3);
	int intSubt = myCalculator.subtract(10, 2);

	Calculator<double> dCalculator;
	double dsum = dCalculator.add(3.71, 2.23);
	double ddif = dCalculator.subtract(3.71, 2.23);

	Calculator<string> stringCalculator;
	string stringSum = stringCalculator.add("Hello", "World");
	string stringDif = stringCalculator.subtract("Hello", "World");

	cout << "******************************************************" << endl;
	cout << "\t\tGeneric Classes" << endl << endl << endl;

	cout << "Int sum: " << intSum << endl;
	cout << "Int difference: " << intSubt << endl;

	cout << "Double sum: " << dsum << endl;
	cout << "Double difference: " << ddif << endl;

	cout << "String sum: " << stringSum << endl;
	cout << "String difference: " << stringDif << endl;

	cout << "******************************************************" << endl;

	return 0;
}
