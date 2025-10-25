#include "rect.h"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

int Rectangle::getPerimeter() {
	return (width + height) * 2;
}

int Rectangle::getArea() {
	return (width * height);
}

int Rectangle::getWidth() {
	return width;
}

int Rectangle::getHeight() {
	return height;

}

void Rectangle::setHeight(int h) {
	height = h;
}

void Rectangle::setWidth(int w) {
	width = w;
}
