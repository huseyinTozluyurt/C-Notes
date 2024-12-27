#include <iostream>
#include <string>
using namespace std;
int sizeStr(string str) {
	int size = 0;
	for (char c : str)
		size++;
	return size;
}
void printString(string str, int size) {
	for (int i = 0; i < size; i++)
		cout << str[i];
	cout << endl;
}
int main() {
	string str1 = "hello",str2="A";
	int key1 = 8,key2=129;
	int size1 = sizeStr(str1);
	int size2 = sizeStr(str2);
	for (int i = 0; i < size1; i++)
		str1[i] += key1;
	for (int j = 0; j < size2; j++)
	{
		int value=128%str2[j];
		str2[j]=key2 - value;
	}

	printString(str1, size1);
	printString(str2, size2);
	cout << str1.length()<<endl<<str2.length();
	return 0;
}
