#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
void printVector(vector<T>& vect) {
    typename vector<T>::iterator it;
    for (it = vect.begin(); it != vect.end(); ++it)
        cout << *it << "\t";
    cout << endl;
}

int main() {
    vector<int> myvect;
    vector<string> strvect;
    int sizestrvect = 0;

    while (!(sizestrvect < 100 && sizestrvect > 0)) {
        cout << "Size(string vector): ";
        cin >> sizestrvect;
    }

    cin.ignore(); 

    for (int a = 0; a < sizestrvect; a++) {
        string val;
        cout << "Vector[" << a + 1 << "]: ";
        getline(cin, val);
        strvect.push_back(val);
    }

    for (int i = 0; i < 5; i++) {
        myvect.push_back(i);
    }

    int size = myvect.size();
    cout << "Size: " << size << endl;

    printVector(myvect);
    printVector(strvect);

    return 0;
}
