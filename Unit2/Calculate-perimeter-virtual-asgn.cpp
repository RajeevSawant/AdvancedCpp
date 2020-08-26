#include <iostream>
using namespace std;


class Perimeter
{
	public:
		virtual void CalPerimeter() = 0;

	protected:
		int pr;  
};


class Rectangle : public Perimeter
{
	public:
		Rectangle(): len(0), wd(0) {}
		void set_values(int a, int b)
		{
			len = a; wd = b;
		}
		void CalPerimeter()
		{
			pr = 2 * (len + wd);
			cout << "Perimeter of Rectangle is  " << pr << endl;
		}
	protected:
		int len, wd;

};


class Triangle : public Perimeter
{
	public:
		Triangle(): sa(0), sb(0), sc(0) {}
		void set_values(int a, int b, int c)
		{
		 	sa = a; sb = b; sc = c;
		}
		void CalPerimeter()
		{
			pr = sa + sb + sc;
			cout << "Perimeter of the Triangle is " << pr << endl;
		}
	protected:
		int sa, sb, sc;
};



class Square : public Perimeter
{
	public:
		Square(): side(0) {}
		void set_values(int s)
		{
			side = s;
		}

		void CalPerimeter()
		{
			pr = 4 * side;
			cout << "Perimeter of the square is " << pr << endl;
		}

	protected:
		int side;
};


int main()
{
	Perimeter *peri;
	Rectangle rect;
	Triangle tri;
	Square sqr;



	peri = &rect;
	rect.set_values(5, 6);
	peri -> CalPerimeter();


	peri = &tri;
	tri.set_values(2, 3, 4);
	peri -> CalPerimeter();

	peri = &sqr;
	sqr.set_values(20);
	peri -> CalPerimeter();

	return 0;

}
