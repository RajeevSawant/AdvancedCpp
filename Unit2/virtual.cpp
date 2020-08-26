

#include <iostream>
using namespace std;


class Parallelogram
{
	public:
		Parallelogram(): width(0), height(0), ar(0) {}
		void set_values(int a , int b)
		{
			width = a; height = b;
		}

		virtual void area()
		{
			ar = width * height;
			cout << "Area of parallelogram is " << ar << endl;
		}
	protected:
		int width, height, ar;

};


class Rectangle : public Parallelogram
{
	public:
		void area()
		{
			ar = width * height;
			cout << "Area of the rectangle is  " << ar << "\n";
		}

};

class Triangle: public Parallelogram
{
	public:
		void area()
		{
			ar =  width * height / 2;
			cout << "Area of the traingle is  " << ar  << endl;
		}
};


int main()
{
	Parallelogram *parallel, p;
	Rectangle rect;
	Triangle trgl;


	parallel = &p;
	parallel -> set_values(3, 2);
	parallel -> area();

	parallel = &rect;
	parallel -> set_values(4, 5);
	parallel -> area();

	parallel = &trgl;
	parallel -> set_values(6, 5);
	parallel -> area();


	return 0;
}
