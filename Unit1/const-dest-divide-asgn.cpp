#include <iostream>
using namespace std;


class Divide{
   
	public:
		Divide();
		Divide(int, int);
		~Divide();

		double div()
		{
		   return (x/y);	
		}

	private:
		int x, y;
};

Divide :: Divide(int a, int b)
{
	x = a;
	y = b;
}


Divide :: ~Divide ()
{
	cout << "Memory Deallocation" << "\n";
}

int main()
{
       Divide obj(20, 2);

       cout << "The Quotient is " << obj.div() << "\n";
	return 0;
}
