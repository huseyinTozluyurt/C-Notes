#pragma once
using namespace std;
class Rectangle {
	//Rectangle();
	int width, height;

	public:
		Rectangle();
		Rectangle(int, int);
		int getPerimeter(void);
		int getArea(void);

		int getWidth(void);
		void setWidth(int);
		int getHeight(void);
		void setHeight(int);


};
