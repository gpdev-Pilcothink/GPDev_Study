#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(int r)
{
	radius = r;
}

double Circle::getArea() 
{
	return 3.14 * radius * radius;
}



int main() {
	int radius;
	Circle donut(30);
	double area = donut.getArea();

	Circle donut2;
	double area2 = donut2.getArea();

	cout << area << endl;
	cout << area2;
	
	return 0;
}