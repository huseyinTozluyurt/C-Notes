#include <iostream>
#include <string>

using namespace std;

int main() {

	string str = "There are two errors in this system and there are 4 bugs in the system. ";
	size_t size = str.size();
	cout << "size: " << size<<endl;
	size_t pos = str.find("system");
	if (pos != string::npos)
		cout << "First 'system' found at: " << pos << endl;
	pos = str.find("system", pos + 1);
	if (pos != string::npos)
		cout << "Second 'system' found at: " << pos <<endl;
	pos = str.find("errors");
	if (pos != string::npos)
		cout << "'errors' found at: " << pos << endl;
	pos = str.find("bugs");
	if (pos != string::npos)
		cout << "'bugs' found at: " << pos << endl;
	pos = str.find("are");
	cout <<"'are' found at: " << pos<<endl;
	pos = str.find("are", pos + 1);
	cout << "Second 'are' found " << pos << endl;
	string myString = str.substr(0, 5);
	cout << myString<<endl;
	myString = str.substr(52, 4);
	cout << "Bugs expected: " << myString << endl;
	myString = str.substr(40);
	cout << myString << endl;
  //modifying a string by removing all letter 'i'.
	for (int i = 0; i < size; i++)

		if (str[i] == 'i')
		{
			str = str.erase(i, 1);
			size--;

		}
	cout << str;



	return 0;
}
