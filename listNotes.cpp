#include <iostream>
#include <list>
using namespace std;

int getListLength(list<int> myList) {
	int counter = 0;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
		counter += 1;
	}
	return counter;
}

void printList(list<int>& myList,string name) {
	int size=getListLength(myList);
	cout << "[ ";
	for (list<int>::const_iterator it= myList.begin(); it != myList.end(); it++) {
		cout << *it<<",";
	}
	cout << " ]";
	cout << "\t =>\t"<<name<<" Ratings" << endl;

}


int main() {
	/*
	Basics of list
	list<int> myList;
	myList.push_back(12);
	myList.push_back(23);
	myList.push_back(33);
	myList.push_front(1);

	for (list<int>::iterator myit= myList.begin(); myit != myList.end(); myit++) {
		cout << *myit << "\t";
	}
	*/

	list<int> playerRatings = {7,3,2,22,4,1,34,9,5,45,2,23,12,2,1,11,6,9,10,4,7,1};
	list<int> beginner;
	list<int> pro;
	list<int> invalidRatings;

	for (list<int>::iterator it = playerRatings.begin(); it != playerRatings.end(); it++) {
		int rating = *it;
		if (rating < 4)
			beginner.push_back(rating);
		else if (rating >= 4 && rating <= 10)
			pro.push_back(rating);
		else
			invalidRatings.push_back(rating);
	}
	
	printList(beginner,"Beginer");
	printList(pro,"Pro");
	printList(invalidRatings,"Invalid");

	return 0;
}
