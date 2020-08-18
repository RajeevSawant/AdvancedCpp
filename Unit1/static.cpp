#include <iostream>
using namespace std;

class statex{

	public:
		static int sum;
		statex()
		{
			x = sum++;
		}

		static void stat()
		{
			cout << "Result is:  " << sum << "\n";
		}

		void number()
		{
			cout << "Number is:  " << x << "\n";
		}

	private:
		int x;
};


int statex :: sum;        // Storage is allocated to varaible sum it is initialized to zero.

int main()
{

	statex o1, o2, o3;
	o1.number();
	o2.number();
	o3.number();


	statex::stat();
	cout << "Now static var sum is " << o1.sum << "\n";
	return 0;
}

