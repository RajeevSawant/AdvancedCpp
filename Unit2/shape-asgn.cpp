#include <iostream>
using namespace std;

class Shape
{
	public:
		void area_display()
		{
		    cout <<"Area is :" << area << "\n";
		}
		void perimeter_display()
		{
		    cout << "Perimeter is  :" << perimeter <<"\n";
		}

	protected:
		float perimeter;
		float area;
};

class square : public Shape
{
	public:
		void input_display()
		{
		    cout << "Enter the lenght of side  :" << "\n";
		    cin >> side; 
		}

		void calculate_area()
		{
			area = side * side;
			area_display();
		}

		void calculate_perimeter()
		{
			perimeter = 4 * side;
			perimeter_display();
		}

	private:
		int side;

};


class rectangle : public Shape
{
	public:
		void input_display()
		{
			cout << "Enter the length of rectangle  :" << "\n";
			cin >> length;

			cout << "Enter the breath of rectangle  :" << "\n";
			cin >> breath;
		}

		void calculate_area()
		{
			area = length * breath;
			area_display();
		}

		void calculate_perimeter()
		{
			perimeter = 2 * (length + breath);
			perimeter_display();
		}

	private:
		int length;
		int breath;

};


class circle : public Shape
{

	public:
		void input_display()
		{
			cout << "Enter the radius :" << "\n";
			cin >> radius;
		}

		void calculate_area()
		{
			area = 3.1415926535 * radius * radius;
			area_display();
		}

		void calculate_perimeter()
		{
			perimeter = 2 * 3.1415926535 * radius;
			perimeter_display();
		}

	private:
		int radius;

};



int main()
{
	square sq;

	sq.input_display();
	sq.calculate_area();
	sq.calculate_perimeter();


	rectangle rq;
	rq.input_display();
	rq.calculate_area();
	rq.calculate_perimeter();
	
	
	circle cq;
	cq.input_display();
	cq.calculate_area();
	cq.calculate_perimeter();
	
	return 0;
}

