#include <iostream>
using namespace std;


class arithmetic
{
	public:
		void values (int x, int y)
		{
			a = x, b = y;
		}
		virtual void operations()
		{
			sum = a + b;
			cout << "Addition of two numbers is  "<< sum << endl;

		}
	protected:
		int a , b, sum, sub, div, mul;
	
};


class Subtract: public arithmetic 
{
	public:
		void operations()
		{
			sub = a - b;
			cout << "Difference of two numbers " << sub << "\n";
		}
};


class Multiply: public arithmetic
{
	public:
		void operations()
		{
			mul = a * b;
			cout << "Muliplications of two numbers " << mul << endl;
		}
};

class Divide: public arithmetic
{
	public:
		void operations()
		{
			div = a/b;
			cout << "Division of two numbers is " << div << endl;
		}

};

int main()
{
	arithmetic *arith , p;
	Subtract  subt;
	Multiply  mult;
	Divide  divd;


	arith = &p;

	arith -> values(42, 5);
	arith -> operations();


	arith = &mult;
	arith -> values(6, 5);
	arith -> operations();


	arith = &divd;
	arith -> values(10, 2);
	arith -> operations();

	arith = &subt;
	arith -> values(9, 3);
	arith -> operations();


	return 0;
}
