#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(4) {}

Circle::Circle(int r)
{
	radius = r;
}

double Circle::getArea() 
{
	return 3.14 * radius * radius;
}

Circle::~Circle() {
	cout << "¹ÝÁö¸§" << radius << "µµ³Ó ¼Ò¸ê\n" << endl;
}



int main() {
	int radius;
	Circle donut(30);
	double area = donut.getArea();

	Circle donut2;
	double area2 = donut2.getArea();

	cout << area << endl;
	cout << area2<< endl;
	
	return 0;
}