#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}



int main() {
	Circle donut;
	int radius;

	cin >> radius;

	double area = donut.getArea();

	cout << area;
	
	return 0;
}