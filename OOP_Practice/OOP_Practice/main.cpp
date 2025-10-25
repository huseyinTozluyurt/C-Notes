#include <iostream>
#include "rect.h"
using namespace std;

void getRectData(class Rectangle r) {

	cout << " ------------------------------------------------" << endl;
	cout << "|\t\tRectangle Data\t\t\t|" << endl;
	cout << " ------------------------------------------------" << endl;
	cout << "Rectangle Width: " << r.getWidth() << endl;
	cout << "Rectangle Height: " << r.getHeight() << endl;
	cout << "Rectangle Perimeter: " << r.getPerimeter() << endl;
	cout << "Rectangle Area: " << r.getArea() << endl;
}

int main() {

	Rectangle myRect(12,15);
	//myRect.setWidth(10);
	//myRect.setHeight(13);
	getRectData(myRect);

	Rectangle* ptr = &myRect;
	ptr->setHeight(3);
	ptr->setWidth(9);
	getRectData(*ptr);

	return 0;
}
