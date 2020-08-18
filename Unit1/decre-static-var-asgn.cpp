#include <iostream>
using namespace std;


class statex{

	public:
		static int dec;
		statex()
		{
		   x = dec--;	
		}
		
		static void stat()
		{
		  cout << "Result is:  " << dec << "\n";
		}

		void number()
		{
		  cout << "Number is:  " << x << "\n";
		}

	private:
		int x;
};


int statex :: dec;     // declare the varaible and initialize it to 0.


int main()
{	
	statex o1, o2, o3;

	o1.number();
	o2.number();
	o3.number();
	statex :: stat();

	cout << "Now the static var is:  " << o1.dec << "\n";

	return 0;
}
