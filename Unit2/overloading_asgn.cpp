#include <iostream>
using namespace std;


void area(float r)
{
	float area = 3.1415926535 * r * r;
        cout << "Area of the circle is " << area << endl;	
}


void area (int length , int breadth)
{
	int area = length * breadth;
	cout << "Area of the Rectangle is " << area << endl;
}

void area (int side)
{
	int area = side * side;
	cout << "Area of the Square is " << area << endl;
}


int main()
{
	float radius;
	int a , b, c;

	cout << "Enter the radius \n";
	cin >> radius;

	area(radius);

	cout << "Enter the Length and Breadth of the rectangle \n";
	cin >> a >> b;

	area(a, b);


	cout << "Enter the side of square \n";
	cin >> c;

	area(c);

	return 0;
}
