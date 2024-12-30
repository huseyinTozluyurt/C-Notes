#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> myVect) {
	for (auto it = myVect.begin(); it != myVect.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

void insertVector(vector<int>& vect, int count=1,bool inputting=false,int val=12) {
	if (inputting == false) {
		vect.push_back(val);

	}
	else {
	
		
		for (int i = 0; i < count; i++) {
			cout << "Value: ";
			cin >> val;
			vect.push_back(val);
		}
	
	
	}
	cout << endl;
}

int main() {

	vector<int> mdata = { 32,21,39,45,53 };
	mdata.push_back(0);
	printVector(mdata);
	insertVector(mdata,NULL,NULL,20);//alternative of push_back
	printVector(mdata);
	printVector(mdata);
	insertVector(mdata, 3, true);//inserting for 3 times
								
	printVector(mdata);

	return 0;
}
