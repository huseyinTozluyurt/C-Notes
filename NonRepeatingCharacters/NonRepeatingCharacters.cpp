#include <iostream>

using namespace std;
/*bool isAlphabetical(string str) {
	
}*/
void toLowercase(string& str) {
	int size=str.length();
	for (int i = 0; i < size; i++) {
		if (str[i]>='A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}

	}
}
int main() {
	string str = "HAkPpPyz";
	string ans = "";
	int size = str.length();
	toLowercase(str);
	cout << str<<endl;
	string arr[26];
	for (int i = 0; i < size; i++)
	{
		bool decision=true;
		for (int j = 0; j < size; j++)
		{
			if (((decision == true) && (j == size - 1)) == 1)
			{
				ans += str[i];
			}
			if (j == i)
				continue;
			if (str[i] == str[j]) {
				decision = false;
				continue;
			}

		}

	}
	cout << ans;
}
