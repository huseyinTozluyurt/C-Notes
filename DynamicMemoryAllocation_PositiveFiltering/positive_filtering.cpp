#include <iostream>
#include <string>
using namespace std;

void populateArray(int* arr, int nsize) {
	
	int val;
	for (int i = 0; i < nsize; i++) {
		cout << "Value[" << (i + 1) << "]: ";
		cin >> val;
		arr[i] = val;

	}
}
void printArray(int* arr, int nsize,string arr_name="Array") {

	cout << arr_name <<": "<<endl;
	cout << "[ ";
	for (int i = 0; i < nsize; i++) {
		if (i != (nsize-1)) {

			cout << arr[i] << ", ";

		}
		else
			cout << arr[i] << " ]";

	}
	cout << endl;

}

int* positiveArray(int* arr, int nsize, int& outSize) {
	int positive_count = 0;
	for (int i = 0; i < nsize; i++) {
		if (arr[i] >= 0) positive_count++;
	}

	outSize = positive_count;
	int* final_arr = new int[outSize];

	int k = 0;
	for (int j = 0; j < nsize; j++) {
		if (arr[j] >= 0) {
			final_arr[k] = arr[j];
			k++;
		}
	}
	return final_arr;
}


void deleteArr(int* arr) {
	delete[] arr;
	arr = nullptr;
}

int main() {

	int nsize;
	cout << "Enter size of array: ";
	cin >> nsize;
	int* myArr = new (nothrow) int[nsize];
	populateArray(myArr, nsize);
	printArray(myArr, nsize, "My Array");
	int s = 0;
	int* my_positive_arr = positiveArray(myArr, nsize,s);
	printArray(my_positive_arr, s, "Filtered Array");
	delete[] myArr;
	delete[] my_positive_arr;


	return 0;
}
