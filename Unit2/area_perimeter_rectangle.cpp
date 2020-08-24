
#include <iostream>
using namespace std;


class Parameters
{
	protected:
		int length;
		int breadth;
};


class Show : public Parameters
{
	public:
		void input_rectangle();
		void display_rectangle();
};

void Show :: input_rectangle()
{
	cout << "Enter the length ";
	cin >> length;

	cout << "Enter the breadth ";
	cin >> breadth;
	cout << endl;
}


void Show :: display_rectangle()
{
	cout << "Length is " << length << endl;
	cout << "Breadth is " << breadth << endl;
}

class Area : public Show
{
	public:
		int area_rectangle();

	protected:
		int area;	
};


int Area :: area_rectangle()
{
	input_rectangle();
	area = length * breadth;
	return area;
}


class Perimeter : public Show
{
	public:
		int perimeter_rectangle();

	protected:
		int perimeter;
};


int Perimeter :: perimeter_rectangle()
{
	input_rectangle();
	perimeter = 2 * (length + breadth);

	return perimeter;
}


class Rectangle : public Area, public Perimeter
{
	
	public:
		void display();
};

void Rectangle :: display()
{
	//display_rectangle();

	int rec_area = area_rectangle();
	cout << "The Area of the rectangle is " << rec_area << endl << endl;
	
	int rec_perimeter = perimeter_rectangle();
	cout << "The Perimeter of the rectangle is " << rec_perimeter << endl << endl;
}



int main()
{
	Rectangle o_rec;

	o_rec.display();

	return 0;
};
