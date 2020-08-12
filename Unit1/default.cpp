#include <iostream>
using namespace std;

class Substraction{
	
	public:
	 	Substraction();
		~Substraction();
	 	int sub(int x, int y)
	 	{
          	 return (x - y);
	 	}
		int x, y;          // default constructor since the data members are public , if data members are private use parameterised constructor.
};

Substraction :: Substraction()
{
  cout << "Default Constructor Called" << "\n";
}

Substraction :: ~Substraction()
{
  cout << "Memory Deallocation" << "\n";
}

int main()
{
  Substraction obj;

  // passed the arguments with-in the func
  cout << "Difference is " << obj.sub(10 , 3)<< "\n";
  return 0;
}
